#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_all - A function that prints anything
 * @format: a list of type arguments passed to the function
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *string, x;
	va_list prints;

	va_start(prints, format);

	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(prints, int));
			break;
		case 'i':
			printf("%d", va_arg(prints, int));
			break;
		case 'f':
			printf("%f", va_arg(prints, double));
			break;
		case 's':
			string = va_arg(prints, char *);
			if (string == NULL)
				string = "(nil)";
			printf("%s", string);
			break;
		default:
			break;
		}
		i++;
		x = format[i];

		if ((x != '\0') && (x == 'c' || x == 'i' || x == 'f' || x == 's'))
			printf(",");
	}

	printf("\n");
	va_end(prints);
}
