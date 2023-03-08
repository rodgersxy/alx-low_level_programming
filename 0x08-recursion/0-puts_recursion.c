#include "main.h"
/**
 * _puts_recursion - Prints a string followed by new line
 * @s: Pointer to the string to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{

		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
