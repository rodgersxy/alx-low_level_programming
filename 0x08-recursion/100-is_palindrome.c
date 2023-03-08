#include "main.h"
/**
 * palindromeCheck - checking the string
 * @str: The string to be checked
 * @len: Length of the string
 * @i: Increment starting from 0
 * Return: 1 if is is palindrome, otherwise 0
 */
int palindromeCheck(char *str, int len, int i)
{
	if (i < len && str[i] == str[len])
		return (palindromeCheck(str, len - 1, i + 1));
	if (str[i] != str[len])
		return (0);
	return (1);
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to check the length
 * Return: Integer that displays the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}
/**
 * is_palindrome - checks to see if a string is a palindrome
 * @s: the string to check
 * Return: 1 if it's a palindrome, 2 if it's not
 */
int is_palindrome(char *s)
{
	int i = 0;
	int length = _strlen_recursion(s) - 1;

	return (palindromeCheck(s, length, i));
}
