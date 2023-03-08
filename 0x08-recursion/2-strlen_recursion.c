#include "main.h"
/**
 * _strlen_recursion - A function that returns the length of a string
 * @s: Input string to print
 * Return: The length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));

	return (0);
}
