#include "main.h"
int _sqrt(int prev, int root);
/**
 * _sqrt_recursion - It returns the value of square root of n
 * @n: Input integer
 * Return: It returns the square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(1, n));
}
/**
 * _sqrt - Find square root
 * @prev: Previous value
 * @root: Square root value
 * Return: The square root
 */
int _sqrt(int prev, int root)
{
	if (prev > root)
		return (-1);
	else if (prev * prev == root)
		return (prev);

	return (_sqrt(prev + 1, root));
}
