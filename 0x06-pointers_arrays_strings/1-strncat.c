#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: The string input
 * @n: The input integer
 * Return: Pointer to result string
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_length = 0;
	int src_length = 0;

	while (*(dest + dest_length) != '\0')
		dest_length++;

	while (*(src + src_length) != '\0' && src_length < n)
	{
		*(dest + dest_length + src_length) = *(src + src_length);
		src_length++;
	}
	*(dest + dest_length + src_length) = '\0';

	return (dest + 0);
}
