#include "main.h"
/**
* _atoi - converts a string to an integer
* @s: pointer to be converted
* Return: integer
*/
int _atoi(char *s)
{
	int i = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			min *= -1;
		}

		while (s[i] >= 48 && s[i] <= 57)
		{
			isi = 1;
			i = (ni * 10) + (s[i] - '0');
			i++;
		}

		if (isi == 1)
		{
			break;
		}
		i++;
	}

	ni *= min;
	return (ni);
}
