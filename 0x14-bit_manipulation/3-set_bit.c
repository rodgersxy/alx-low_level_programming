#include "main.h"
/**
 * set_bit -  function that sets the value of a bit to 1 at a given index.
 * @n: pointer to a number whose bit is to be set
 * @index: position
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(n) * 8)
	{
		/*unsigned long literal with value of 1*/
		*n |= 1UL << index;/*left shifted*/
		return (1);
	}

	return (-1);
}
