#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: pointer to the first element in the array
 * @size: number od elements in the array
 * @value: the value to search for
 * Return:  the first index where value is located, If value is not present
 * in array or if array is NULL, your function must return -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
