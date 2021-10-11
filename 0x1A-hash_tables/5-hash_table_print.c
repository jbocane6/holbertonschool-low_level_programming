#include "hash_tables.h"

/**
 * hash_table_print - Function that prints a hash table.
 * @ht: Hash table.
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, comma = 0;
	hash_node_t *new = NULL;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		new = ht->array[i];
		while (new)
		{
			if (new->value)
			{
				if (comma == 1)
					printf(", ");
				printf("'%s': '%s'", new->key, new->value);
				comma = 1;
			}
			new = new->next;
		}
	}
	printf("}\n");
}
