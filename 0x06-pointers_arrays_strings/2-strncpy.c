#include "main.h"
/**
 * _strncpy - copies and manipulates string
 * @dest: input string
 * @src: input string
 * @n: input integer
 * Return: pointer to result string
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != 0; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}

	return (dest);
}
