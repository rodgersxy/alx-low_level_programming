#include "search_algos.h"
/**
* interpolation_search - a function that searches for a value in a sorted
* array of integers using the Interpolation search algorithm
* @array: pointer to the first element in array to search in
* @size: is s the number of elements in array
* @value: is the value to search for
* Return: If value is not present in array or if array is NULL,
* your function must return -1
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t mid;
	size_t high = size - 1;


	if (array == NULL || !size)
		return (-1);
	while ((array[high] != array[low]))
	{
		mid = low +
			(((double)(high - low)
					    / (array[high] - array[low])) * (value - array[low]));
		if (mid >= size)
		{
			printf("Value checked array[%lu] is out of range\n", mid);
			return (-1);
		}

		printf("Value checked array[%lu] = [%d]\n", mid, array[mid]);

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}

	if (array[low] == value)
		return (low);
	return (-1);
}
