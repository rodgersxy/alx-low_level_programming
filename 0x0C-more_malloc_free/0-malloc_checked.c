#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: unsigned input integer
 * Return: a pointer to allocated memory if (success) otherwise it exits
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);

	return (i);
}
