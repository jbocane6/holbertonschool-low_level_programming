#include "hash_tables.h"

/**
 * hash_table_delete - Function that deletes a hash table.
 * @ht: Hash table to delete.
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *new = NULL, *tmp = NULL;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			new = ht->array[i];
			while (new)
			{
				tmp = new;
				new = new->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
