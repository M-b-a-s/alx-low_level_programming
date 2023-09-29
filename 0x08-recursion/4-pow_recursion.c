#include "main.h"
/**
 * _pow_recursion - returns value of c raised to the power of y
 * @x: base
 * @y: power
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
