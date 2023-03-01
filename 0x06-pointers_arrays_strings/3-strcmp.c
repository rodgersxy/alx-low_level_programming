#include "main.h"
/**
 *_strcmp - compare two strings character by character
 *@s1: first string
 *@s2: second string
 *Return: The differeence in s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}

	return (*s1 - *s2);
}
