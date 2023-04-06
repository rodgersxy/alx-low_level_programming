#include "main.h"
/**
 * print_binary - a function that prints the binary representation of a number
 * @n: integer to print
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	/*check if number is equal or less than 1*/
	if (n <= 1)
	{
		_putchar (n + '0');
		return;
	}
	/*moves bit by one positon to the right*/
	print_binary(n >> 1);
	/*to get ASCII value of '0' or '1'*/
	_putchar((n & 1) + '0');
}
