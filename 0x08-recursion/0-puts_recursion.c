#include "main.h"
/**
 * _puts_recursion - print a string followed by a new line
 * @s: string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_putchar(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
