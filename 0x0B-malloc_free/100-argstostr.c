#include "main.h"
#include <stdlib.h>
/**
 * argstostr - To concatenate all the arguments of a program
 * @ac: Number of arguments to the program
 * @av: Array of the program
 * Return: Pointer to the string (success) or NULL if (error)
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	int len = 0;
	char *str;

		if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++)
			len++;
	}
	str = malloc(sizeof(char) * (len + i + 1));
	if (str)
	{
		len = 0;
		for (i = 0; i < ac; i++)
		{
			for (j = 0; *(*(av + i) + j) != '\0'; j++)
			{
				*(str + len) = *(*(av + i) + j);
				len++;
			}
			*(str + len) = '\n';
			len++;
		}
		*(str + len) = '\0';
		return (str);
	}
	else
	{
		return (NULL);
	}
}
