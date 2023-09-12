#include "main.h"
/**
 * print_alphabet_x10 - prints all lowercase letters 10 times
 */
void print_alphabet_x10(void)
{
	char letter;
	int x_times = 0;

	while (x_times++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
