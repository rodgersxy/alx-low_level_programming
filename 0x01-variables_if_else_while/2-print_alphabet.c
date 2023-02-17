#include <stdio.h>
/**
 * main - prints the alphabets in lowercase
 *
 * description: The program will print the entire
 * alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
