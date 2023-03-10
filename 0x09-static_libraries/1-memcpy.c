#include "main.h"
/**
 *_memcpy -   copy number of bytes from address source to destination
 *@dest: content is to be copied
 *@src: Source of data to be copied
 *@n: number of bytes
 *Return: returns pointer to copy location
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_start = dest;

	while (n--)
	{
		*dest++ = *src++;


	}

	return (dest_start);
}
