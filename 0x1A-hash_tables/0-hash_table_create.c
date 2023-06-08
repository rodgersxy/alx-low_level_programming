#include "hash_tables.h"
/**
* hash_table_create - creates the hash table
* @size: the size of the array
* Return: returns a pointer to the new hash table
* else NULL if it coudn't create one
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	/*declare a pointer new_table init to NULL*/
	hash_table_t *new_table = NULL;

	if (size == 0)
		return (NULL);

	/*allocate memory the struct*/
	new_table = malloc(sizeof(hash_table_t) * 1);
	if (new_table == NULL)
		return (NULL);

	new_table->size = size;

	/*allocate memory for hash table array*/
	new_table->array = calloc(size, sizeof(hash_node_t *));
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	return (new_table);
}
