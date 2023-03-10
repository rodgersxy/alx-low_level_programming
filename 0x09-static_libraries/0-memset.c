#include "main.h"
/**
 * _memset - a function that fill memory with constant bytes
 * @s: location to fill
 * @b: char to fill location memory area
 * @n: Number of bytes to fill
 * Return: returns pointer to location filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}

	return (start);
}
