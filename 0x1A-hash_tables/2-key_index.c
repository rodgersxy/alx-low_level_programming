#include "hash_tables.h"
/**
* key_index - To give the index of the key
* @key: representing the key
* @size: representating the size of the hash table
* Return: index of the key
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);

	return (hash % size);
}
