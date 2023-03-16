#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - create an array of integers containing all values
 * @min: minimum value
 * @max: maximum value
 * Return: Pointer to the newly created array or NULL on failure
 */
int *array_range(int min, int max)
{
	int *new_arr;
	int i;
	int j = 0;

	if (min > max)
		return (NULL);

	new_arr = malloc(sizeof(int) * (max - min + 1));
	if (new_arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		new_arr[j] = i;
		j++;
	}

	return (new_arr);
}
