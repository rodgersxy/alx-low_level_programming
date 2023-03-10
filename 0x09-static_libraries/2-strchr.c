#include "main.h"
#include <stdio.h>
/**
 * _strchr - Locates a character in a string
 * @s: Pointer to String
 * @c: Character to locate
 * Return: Pointer to the first occurrence of the character c in the string
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
