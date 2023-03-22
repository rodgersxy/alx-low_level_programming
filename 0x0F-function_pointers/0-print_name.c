#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - A function that prints a name
 * @name: Pointer to name that's to print
 * @f: function to print name
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
	{
		f(name);
	}
}
