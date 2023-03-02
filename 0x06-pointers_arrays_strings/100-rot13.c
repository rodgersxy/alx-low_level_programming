#include "main.h"
/**
 * rot13 - Encodes a string using rot13
 * @str: The source string
 *
 * Return: The string
 */
char *rot13(char *str)
{
	int x = 0;

	while (*(str + x) != '\0')
	{
		int is_low_1 = *(str + x) >= 'a' && *(str + x) <= 'm';
		int is_low_2 = *(str + x) >= 'A' && *(str + x) <= 'M';
		int is_upper = *(str + x) >= 'A' && *(str + x) <= 'Z';
		int is_lower = *(str + x) >= 'a' && *(str + x) <= 'z';

		if (is_lower || is_upper)
		{
			*(str + x) = ((is_low_1 + is_low_2) * (*(str + x) + 13))
				+ ((1 - is_low_1 - is_low_2) * (*(str + x) - 13));
		}
		x++;
	}

	return (str);
}
