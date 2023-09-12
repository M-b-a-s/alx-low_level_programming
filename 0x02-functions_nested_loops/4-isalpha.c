#include "main.h"
/**
 * _isalpha - checks if letter is an alphabet
 * @c: the variable to be checked
 * Return: 1 - Success / 0 - Failure
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
