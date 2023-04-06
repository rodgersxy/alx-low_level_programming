#include "main.h"
/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: bit number
 * @index: position of a given index
 * Return: value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/*check if index is > than maximum possible index for n*/
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	/*shift n bit to the right*/
	if ((n >> index) & 1)
		return (1);

	else
		return (0);
}
