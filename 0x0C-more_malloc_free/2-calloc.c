#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for array
 * @nmemb: Number of items in the array
 * @size: Size of item in the array
 * Return: A pointer to the allocated memory or NULL if nmemb or size is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);

	arr = malloc(size * nmemb);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		arr[i] = 0;

	return (arr);
}
