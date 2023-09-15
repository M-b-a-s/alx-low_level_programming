#include <stdio.h>
/**
 * main - entry point
 *
 * desc: prints 1-100
 * prints fizz for multiples of 3
 * prints buzz for multiples of 5
 * prints fizzbuzz for multiples of both
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 15 == 0)
			printf("FizzBuzz");
		else if (a % 3 == 0)
			print("Fizz");
		else if (a % 5 == 0)
			print("Buzz");
		else
			printf("%i", a);
		if (a < 100)
			print(" ");
	}
	printf("\n");
	return (0);
}
