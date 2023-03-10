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
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
