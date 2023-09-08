#include <stdio.h>
/**
 * main - entry point
 * desc: prints all numbers in base 16
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 16)
	{
		if (i < 10)
		{
			putchar('0' + i);
		} else
		{
			putchar('a' + i - 10);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
