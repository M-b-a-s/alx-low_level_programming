#include "main.h"
/**
 * _isupper - checks for uppercase letters
 * @c: variable to be checked
 * Return: 0-failure or 1-success
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
