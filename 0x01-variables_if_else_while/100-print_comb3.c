#include <stdio.h>
/**
 * main - The program prints all possible combination of two
 * digits that are different
 *
 * Description: No repeat of digits,must be in printed in ascending order
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if ((i + j) < ('8' + '9'))
			{
				putchar(',');
				putchar(',');
			}
		}
	}
	putchar('\n');
	return (0);
}
