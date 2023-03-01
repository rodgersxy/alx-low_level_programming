#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @s: The input  string to capitalize letters
 * Return: The resultin string
 */
char *cap_string(char *s)
{
	int x = 0, y;

	char special[13] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	while (*(s + x))
	{
		for (y = 0; y < 13; y++)
		{
			if (x == 0 && s[x] >= 97 && s[x] <= 122)
				s[x] -= 32;
			if (s[x - 1] == special[y])
			{
				if ((*(s + x) >= 97) && (*(s + x) <= 122))
					*(s + x) -= 32;
			}
		}

		x++;
	}

	return (s);
}
