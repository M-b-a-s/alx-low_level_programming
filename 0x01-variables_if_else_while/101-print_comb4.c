#include <stdio.h>
/**
 * main - entry point
 * desc: prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first_digit = 0, second_digit, third_digit;

	while (first_digit <= 7)
	{
		second_digit = first_digit + 1;

		while (second_digit <= 8)
		{
			third_digit = second_digit + 1;

			while (third_digit <= 9)
			{
				putchar('0' + first_digit);
				putchar('0' + second_digit);
				putchar('0' + third_digit);
				if (first_digit != 7 || second_digit != 8 || third_digit != 9)
				{
					putchar(',');
					putchar(' ');
				}
				third_digit++;
			}
			second_digit++;
		}
		first_digit++;
	}

	putchar('\n');
	return (0);
}
