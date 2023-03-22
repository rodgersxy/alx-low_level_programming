#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - function that searches for integer
 * @array: input array
 * @size: Size of the array
 * @cmp: A ponter to a function
 * Return: The index of the first element of which cmp function
 * does not return 0;
 * if no match return -1
 * if size <= 0 return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int (*p)(int);

	p = cmp;

	if (size <= 0)
		return (-1);
	if (!array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (p(array[i]) && array[i] != 0)
			break;
		if (i == size - 1)
			return (-1);
	}
	return (i);
}
