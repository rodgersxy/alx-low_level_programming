#include "search_algos.h"
/**
* exponential_search - a function that searches for a value in a sorted
* array of integers using the Exponential search algorithm
* @array: pointer to first element in array
* @size: number of elements in array
* @value: value to search for
* Return: must return the first index where value is located
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t left, mid, right, i = 1;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);
	for (; i < size && array[i] < value; i *= 2)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	left = i / 2;
	if (i >= size)
		right = size - 1;
	else
		right = i;
	printf("Value found between indexes [%ld] and [%ld]\n", left, right);
	while (array && left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
			else
				printf("\n");
		}
		mid = (right - left) / 2 + left;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
