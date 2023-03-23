#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - That prints string followed by a new line
 * @separator: String to be printed in between
 * @n: Number of strings that are passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list args;


	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (i > 0 && i < n && separator)
			printf("%s", separator);
		printf("%s", str ? str : "(nil)");
	}

	printf("\n");
	va_end(args);
}
