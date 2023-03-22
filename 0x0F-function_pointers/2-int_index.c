#include "function_pointers.h"
/**
 * int_index - function that searches for integer
 * @array: input array
 * @size: Size of the array
 * @cmp: A ponter to a function
 * Return: The index of the first element of which cmp function
 * does not return 0; -1 if no element of size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!cmp || size <= 0 || !array)/*checks for three conditions*/
		return (-1);

	while (cmp(*(array + i)) == 0 && i < size)
		i++;

	return (cmp(*(array + i)) != 0 ? i : -1);
}
