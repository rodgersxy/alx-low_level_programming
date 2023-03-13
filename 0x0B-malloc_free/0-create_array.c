#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it with a specific
 * char
 * @size: size of the array
 * @c: character to initialize the array
 * Return: pointer to array else Null if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);
	if (arr)
	{
		for (i = 0; i < size; i++)
			*(arr + i) = c;
		return (arr);
	}

	else
	{
		return (NULL);
	}
}
