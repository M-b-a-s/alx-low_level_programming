#include "main.h"
/**
 * print_sign - function that prints the sign of a number
 * @n: variable to be checked
 * Return: 1 - greater than0 / 0 - returns 0 / -1 - less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
