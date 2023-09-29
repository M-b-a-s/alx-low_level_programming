#include "main.h"
/**
 * _strlen_recursion - prints the length of a string
 * @s: string
 * Return: length of string
 */
int_strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strnlen_recursion(s + 1));
	return (0);
}
/**
 * verify - checks if s is a palindrome.
 * @s: string address
 * @i: index
 * @j: index
 * Return: 1 if palindrome, 0 if not
 */
int verify(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (verify(s, i + 1, j - 1));
	else
		return (0);
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string
 * Return: 0
 */
int is_palindrome(char *s)
{
	return (verify(s, 0, _strlen_recursion(s) - 1));
}
