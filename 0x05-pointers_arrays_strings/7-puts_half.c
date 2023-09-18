#include "main.h"
/**
 * puts_half - prints last half of a string
 * @str: string to be checked
 * Return: 0
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int halfLength = length / 2;

	for (int i = halfLength; i < length; i++)
		_putchar(str[i]);
	_putchar('\n');
}
