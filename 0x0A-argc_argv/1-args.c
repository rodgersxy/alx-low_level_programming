#include <stdio.h>
#include "main.h"
/**
 * main - prints out number of arguements passed to it
 * @argc: counts the number of arguements
 * @argv: prints the arguments in a commandline
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
