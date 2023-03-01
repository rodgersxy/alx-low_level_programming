#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: an input string
 *
 * Return: the resulting string
 */
char *string_toupper(char *s)
{
	int x = 0;

	while (*(s + x))
	{
		if ((*(s + x) >= 97) &&  (*(s + x) <= 122))
			*(s + x) = *(s + x) - 32;
		x++;
	}
	return (s);
}
