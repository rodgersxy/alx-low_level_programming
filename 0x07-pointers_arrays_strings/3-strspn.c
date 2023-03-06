#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: an input string
 * @accept: an input character with to locate into string s
 * Return: returns pointer to c position
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0, p;
	char *start = accept;

	while (*s)
	{
		p = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				p = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = start;
		if (p == 0)
			break;
	}
	return (count);
}
