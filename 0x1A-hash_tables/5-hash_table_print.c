#include "hash_tables.h"
/**
* hash_table_print - Prints the hash table
* @ht: The hash table to print
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int first = 1;
	hash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (first)
				first = 0;
			else
				printf(", ");
				/*Prints the key/value */
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
