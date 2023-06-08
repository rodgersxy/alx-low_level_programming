#include "hash_tables.h"
/**
* hash_table_set - function that sets a key value pair in hash table
* @ht: pointer to hash table
* @key: is key to set in hash table
* @value: value to set set hash_node value
* Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	hash_node_t *head;
	unsigned long int index;

	if (!ht || !ht->array || ht->size == 0 || !key
		|| strcmp(key, "") == 0 || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];
	if (update_node_value(head, key, value))
		return (1);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
/**
* update_node_value - updates the value of a node with the given key
* @node: pointer to the head of the linked list
* @key: key to search for
* @value: new value to set
* Return: 1 if successful, 0 otherwise
*/
int update_node_value(hash_node_t *node, const char *key, const char *value)
{
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			if (node->value == NULL)
				return (0);
			return (1);
		}
		node = node->next;
	}
	return (0);
}
