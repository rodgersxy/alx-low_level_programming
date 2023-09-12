#include "search_algos.h"
#include <math.h>
/**
* jump_search - a function that searches for a value in a sorted
* array of integer
* using the Jump search algorithm
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
* Return: first index where value is located
*/
int jump_search(int *array, size_t size, int value)
{
	size_t x = 0, y = 0, jump = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);

	while (y < size && array[y] < value)
	{
		x = y;
		y += jump;
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", x, y);

	while (x < y)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);

		x++;
	}

	return (-1);
}
