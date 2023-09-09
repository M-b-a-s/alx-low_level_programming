#include <stdio.h>
/**
*main - entry point
*desc: prints all combinations of two two-digit numbers
*Return: Always 0 (Success)
*/
int main(void)
{
	int first_digit = 0, second_digit = 0;

	while (first_digit <= 99)
	{
		while (second_digit <= 99)
	{
		putchar('0' + (first_digit / 10));
		putchar('0' + (second_digit % 10));
		putchar(' ');

		putchar('0' + (second_digit / 10));
		putchar('0' + (second_digit % 10));

		if (first_digit != 99 || second_digit != 99)
		{
			putchar(',');
			putchar(' ');
		}
		second_digit++;
	}
		first_digit++;
		second_digit = first_digit;
	}
	putchar('\n');
	return (0);
}
