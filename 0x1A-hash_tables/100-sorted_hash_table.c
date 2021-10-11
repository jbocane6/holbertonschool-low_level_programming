#include "hash_tables.h"

/**
 * shash_table_create - Creates a hash table.
 * @size: Size of the new hash table.
 * Return: Pointer to the new hash table.
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *new;

	if (size == 0)
		return (NULL);

	new = malloc(sizeof(shash_table_t));
	if (!new)
		return (NULL);

	new->array = malloc(sizeof(*(new->array)) * size);
	if (!new->array)
	{
		free(new);
		return (NULL);
	}
    new->size = size;
	new->shead = NULL;
	new->stail = NULL;

	for (i = 0; i < size; i++)
		(new->array)[i] = NULL;

	return (new);
}

/**
 * shash_table_set - Function that adds an element to the hash table.
 * @ht: Hash table to want to add or update the key/value to.
 * @key: Not empty string key.
 * @value: Value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise.
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new, *tmp;

	if (!ht || !key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
    tmp = ht->array[index];

	if (tmp)
    {
        while (tmp)
        {
            if (strcmp(tmp->key, key) == 0)
		    {
                free(tmp->value);
                tmp->value = strdup(value);
                if (tmp->value == NULL)
                    return (0);
                return (1);
		    }
        }
    }

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (0);
	}
	new->snext = NULL;
	new->sprev = NULL;
	new->next = (ht->array)[index];
	(ht->array)[index] = new;
	return (insert_to_sorted_linked_list(ht, new));
}

/**
 * insert_to_sorted_linked_list - Inserts a node to the hashtable linked list
 * @ht: Pointer to hash table
 * @new: Node to be inserted
 * Return: 1 on success, 0 otherwise
*/
int insert_to_sorted_linked_list(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *tmp;

	if (!ht)
		return (0);

	if (!ht->shead)
	{
		ht->shead = new;
		ht->stail = new;
		return (1);
	}
	/* Insert at the begining */
	if (strcmp(new->key, ht->shead->key) < 0)
		return (insert_node_start(&(ht->shead), new));

	/* Run through the list to find insertion position */
	tmp = ht->shead;
	while (tmp->snext && strcmp(tmp->snext->key, new->key) < 0)
		tmp = tmp->snext;
	/* Insert at the end */
	if (!tmp->snext)
		return (insert_node_end(&(ht->stail), new));

	/* Insert somewhere between the list */
	tmp->snext->sprev = new;
	new->snext = tmp->snext;
	tmp->snext = new;
	new->sprev = tmp;
	return (1);
}

/**
 * insert_node_start - Inserts a node at the begining of a sorted linked list
 * @head: Pointer to list's head
 * @node: Node to be inserted
 *
 * Return: 1
*/
int insert_node_start(shash_node_t **head, shash_node_t *node)
{
	(*head)->sprev = node;
	node->snext = *head;
	*head = node;
	(*head)->sprev = NULL;

	return (1);
}

/**
 * insert_node_end - Inserts a node at the end of a sorted linked list
 * @tail: Pointer to list's tail
 * @node: Node to be inserted
 *
 * Return: 1
*/
int insert_node_end(shash_node_t **tail, shash_node_t *node)
{
	(*tail)->snext = node;
	node->sprev = *tail;
	*tail = node;
	(*tail)->snext = NULL;

	return (1);
}

/**
 * shash_table_get - Retrieves an element based on it's key
 * @ht: Pointer to the hash table
 * @key: Key for wich to search
 *
 * Return: Value related to key, or NULL
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *tmp;
	unsigned long int index, hash;

	if (!ht || !ht->array || !key || *key == '\0')
		return (NULL);

	hash = hash_djb2((const unsigned char *)key);
	index = hash % ht->size;

	if (!(ht->array)[index])
		return (NULL);

	for (tmp = (ht->array)[index]; tmp; tmp = tmp->next)
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);

	return (NULL);
}

/**
 * shash_table_print - Prints the has in order table
 * @ht: Pointer to the hash table
*/
void shash_table_print(const shash_table_t *ht)
{
	char *sep = "";
	shash_node_t *tmp;

	if (!ht)
		return;

	printf("{");
	for (tmp = ht->shead; tmp; sep = ", ", tmp = tmp->snext)
		printf("%s'%s': '%s'", sep, tmp->key, tmp->value);

	printf("}\n");
}

/**
 * shash_table_print_rev - Prints the has in reverse order
 * @ht: Pointer to the hash table
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	char *sep = "";
	shash_node_t *tmp;

	if (!ht)
		return;

	printf("{");
	for (tmp = ht->stail; tmp; sep = ", ", tmp = tmp->sprev)
		printf("%s'%s': '%s'", sep, tmp->key, tmp->value);

	printf("}\n");
}

/**
 * shash_table_delete - Frees the memory used by the hash table
 * @ht: Pointer to the hash table
*/
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t **array, *tmp, *prev;

	if (!ht || !ht->array)
		return;

	array = ht->array;
	for (i = 0; i < ht->size; i++)
	{
		tmp = array[i];
		while (tmp)
		{
			prev = tmp;
			tmp = tmp->next;
			prev->next = NULL;
			free(prev->key);
			free(prev->value);
			free(prev);
		}
		array[i] = NULL;
	}
	free(array);
	free(ht);
}
