#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: variable that telss number of times
 * Return: no return statement
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
