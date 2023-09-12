#include "main.h"
/**
 * _islower - checks for lowercase letters
 * @c: the c variable is checked for lowercasing
 * Return: 1 - Success / 0 - failure
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
