#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords for the program 101-crackme
 * Return: 0.
 */
int main(void)
{
	char password[84];
	int i = 0, sum = 0;

	srand(time(0));

	while (sum < 2772)
	{
		password[i] = 33 + rand() % 94;
		sum += password[i++];
	}

	password[i] = '\0';

	int diff = sum - 2772;

	if (diff != 0)
	{
		for (i = 0; password[i] && diff > 0; i++)
		{
			if (password[i] >= (33 + diff))
			{
				password[i] -= diff;
				break;
			}
		}
	}
	printf("%s", password);
	return (0);
}
