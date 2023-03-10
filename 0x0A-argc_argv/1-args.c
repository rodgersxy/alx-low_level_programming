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
	int num_args = argc - 1;

	printf("%d\n", num_args);

	return (0);
}
