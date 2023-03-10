#include "main.h"
#include <stdio.h>
/**
 * main - A program that prints all the arguments it receives
 * @argc: The argument counter
 * @argv: The argument value.
 * Return: 0 Success
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
