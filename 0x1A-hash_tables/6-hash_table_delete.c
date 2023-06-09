#include "hash_tables.h"
/**
* hash_table_delete - function tht deletes the hash table
* @ht: hash table to delete
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *new_node = NULL;
	hash_node_t *node = NULL;

	if (ht != NULL)
		return;
	if (ht->array)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				node = ht->array[i];
				while (node)
				{
					new_node = node->next;
					if (node->value)
						free(node->value);
					if (node->key)
						free(node->key);
					free(node);
					node = new_node;
				}
			}
		}
		free(ht->array);
	}
	free(ht);
}
