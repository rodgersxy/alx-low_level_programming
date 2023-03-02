#include "main.h"
/**
 * leet - function to encode string
 * @s: input string to encode
 * Return: Encoded string
 */
char *leet(char *s)
{
	int i = 0, j;

	char encod[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char str[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (s[i])
	{
		for (j = 0; j < 10; j++)
			if (s[i] == str[j])
				s[i] = encod[j];

		i++;
	}

	return (s);
}
