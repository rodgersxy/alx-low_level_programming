#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: To convert numbers or 0 if one or more chars in the string b
 * that is not 0 or 1 otherwise b is not NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int results = 0;
	/*checks if pointer b is NULL*/
	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b < '0' || *b > '1')
			return (0);
		/*shift number to the left by 1*/
		results <<= 1;
		/*increment pointer b to point to next char in string*/
		if (*b++ == '1')
			results += 1;
	}

	return (results);
}
