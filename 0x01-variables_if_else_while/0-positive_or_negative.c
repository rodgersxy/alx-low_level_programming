#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - assign different numbers
 * to a variable and prints its
 * signed state
 *
 * Return: 0 if successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", ni);
	return (0);
}
