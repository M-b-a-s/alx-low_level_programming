#include "main.h"
/**
 * verify - checks if number is a prime number
 * @x: int
 * @y: int
 * Return: 0
 */
int verify(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	else
		return (verify(x + 1, y));
}
/**
 * is_prime_number - returns 1 if the input integer is a number
 * @n: given integer
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (verify(2, n));
}
