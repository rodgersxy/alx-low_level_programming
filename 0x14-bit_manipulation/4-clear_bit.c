#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @index: the bit position to be changed to 0
 * @n: address of the number to be changed
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(n) * 8)
	{
		/*bitwise AND operation | bitwise NOT 1*/
		*n &= ~(1UL << index);
		return (1);

	}

	return (-1);
}
