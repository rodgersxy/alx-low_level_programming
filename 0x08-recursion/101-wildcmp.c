#include "main.h"
/**
 * wildcmp - A function that compares two strings
 * @s1: 1st input string
 * @s2: 2nd input string
 * Return: 1 if strings identical and 0 in otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*' && (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2)))
		return (1);
	if (*s2 == '*' && *(s1 + 1) && *s2)
		return (0);
	return (0);
}
