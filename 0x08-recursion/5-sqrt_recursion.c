#include "main.h"
/**
 * isSqrt -function that checks for the square root
 * @x: int
 * @y: int
 * Return: 0
 */
int isSqrt(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (isSqrt(x + 1, y));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: given parameter
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (isSqrt(1, n));
}
