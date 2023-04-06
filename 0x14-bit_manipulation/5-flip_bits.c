#include "main.h"
/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits needed to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int counter = 0;
	/*calcs the bitwise XOR of n and m*/
	unsigned int xor_results = n ^ m;

	if ((n == 0) && (m == 0))
		return (0);
	while (xor_results)
	{
		if (xor_results & 1)
			counter++;
		xor_results = xor_results >> 1;
	}

	return (counter);
}
