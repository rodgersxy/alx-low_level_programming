#include <stdio.h>
/**
 *main - prints the alphabet in lowercase and upper
 *
 *description: Will print out the entire alphabet in lowercase
 *in the uppercase
 *Return: 0
 */
int main(void)
{
	char a = 'a';
	char z = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	while (z <= 'Z')
	{
		putchar(z);
		z++;
	}

	putchar('\n');
	return (0);
}
