#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <stdarg.h>


/*
 * struct check - paramenters to check against
 * @c: type
 * @f: the function to send it to
 */
typedef struct check
{
	char *chk;
	void (*f)(va_list list);
} check_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
