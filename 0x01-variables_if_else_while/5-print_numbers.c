#include <stdio.h>
/**
 *main - prints single digit numbers of base 10
 *description: Will print out all base 10 numbers
 *followed by a new line
 *Return: 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}

	putchar('\n');
	return (0);
}
