#include "main.h"
/**
 * verify - verify if the given strings are identical
 * @s1: string-1 address
 * @s2: string-2 address
 * @i: index
 * @j: index
 * Return: 1 if s is identical, 0 if it is not
 */
int verify(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (verify(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (verify(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (verify(s1, s2, i + 1, j) || verify(s1, s2, i, j + 1));
	return (0);
}
/**
 * wildcmp - compares two strings
 * @s1: address for string 1
 * @s2: address for string 2
 * Return: 1 if considered identical
 */
int wildcmp(char *s1, char *s2)
{
	return (verify(s1, s2, 0, 0));
}
