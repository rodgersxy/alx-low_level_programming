#include "main.h"
/**
 * reverse_array - Reverses content of an array
 * @a: pointer to integer array
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		int temp = *(a + n  - i - 1);

		*(a + n - i - 1) = *(a + i);
		*(a + i) = temp;
	}
}
