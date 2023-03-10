#include <stdio.h>
#include "main.h"
/**
 * main - Program that prints its name then followed by new line
 * @argc: an integer indicating the number of command line arguments
 * passed to the program(argument count)
 * @argv: array of strings containing those arguments(argument value)
 * Return: 0 (Sucess)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
