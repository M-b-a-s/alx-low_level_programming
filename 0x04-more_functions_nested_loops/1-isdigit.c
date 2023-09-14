#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: variable to be checked
 * Return: 0 - failure 1 - success
 */
int _isdigit(int c)
{
	if (c >= 0 && c < 10)
		return (1);
	else
		return (0);
}
