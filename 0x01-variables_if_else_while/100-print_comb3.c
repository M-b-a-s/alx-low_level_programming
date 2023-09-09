#include <stdio.h>
/**
 * main - entry point
 * desc: prints all possible different combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first_digit = 0, second_digit;

	while (first_digit <= 9)
	{
		second_digit = first_digit + 1;
		while (second_digit <= 9)
		{
			if (!(first_digit > second_digit) || first_digit == second_digit)
			{
				putchar('0' + first_digit);
				putchar('0' + second_digit);
				if (first_digit == 8 && second_digit == 9)
				{
					putchar('\n');
				} else
				{
					putchar(',');
					putchar(' ');
				}
			}

			second_digit++;
		}
		first_digit++;
	}
	return (0);
}
