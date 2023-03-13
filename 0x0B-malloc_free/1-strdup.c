#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to new allocated space in memory which
 * contains a copy of a string given
 * @str: String to copy
 * Return: The pointer to the duplicate string, NULL if @str is NULL or
 * if insufficient
 */
char *_strdup(char *str)
{
	char *arr;
	unsigned int i = 0;
	unsigned int j = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;
	arr = malloc(sizeof(char) * (i + 1));

	if (arr == NULL)
		return (NULL);

	while (str[j])
	{
		arr[j] = str[j];
		j++;
	}
	arr[j + 1] = 0;
	return (arr);

}
