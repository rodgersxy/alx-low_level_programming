#include <stdio.h>
/**
 *main - prints the alphabet in reverse order
 *Description: We are only allowed to only putchar function
 *Return: 0
 */
int main(void)
{
	char n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n--;
	}

	putchar('\n');
	return (0);
}
