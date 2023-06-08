#include "hash_tables.h"
/**
* hash_table_get -  to get the value associated with a given
* key in a hash table
* @ht: pointer to the hash table
* @key: the key that is used to look up the value
* Return: value associated with the element, or NULL if
* key couldn’t be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *head;
	unsigned long int index;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];

	if (head == NULL)
		return (NULL);
	for (; head; head = head->next)
	{
		if (strcmp(head->key, key) == 0)
			return (head->value);
	}
	return (NULL);
}
