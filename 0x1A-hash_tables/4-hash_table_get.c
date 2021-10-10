#include "hash_tables.h"

/**
 * hash_table_get - Function that retrieves a value associated with a key.
 * @ht: Hash table to want to look into.
 * @key: Key looking for.
 * Return: Value associated with the element, NULL if key couldn’t be found.
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash;
	hash_node_t *new = NULL;

	if (!ht || !key)
		return (NULL);
	hash = key_index((const unsigned char *)key, ht->size);
	new = ht->array[hash];
	if (new)
		return (new->value);
	return (NULL);
}
