#include <stdio.h>
/**
 * main - entry point
 * desc: prints 0 - 9 using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar('0' + digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
