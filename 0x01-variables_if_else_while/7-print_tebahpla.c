#include <stdio.h>
/**
 * main - entry point
 * desc: prints lowercase alphabets in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
