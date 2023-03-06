#include "main.h"
#include <stdio.h>
/**
 * _strstr - first occurrence of the substring needle in the string haystack
 * @haystack: input string to be search
 * @needle: searched in haystack
 * Return: return NULL is substring not found
 **/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n == *h && *n != '\0')
		{
			n++;
			h++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}

	return (NULL);
}
