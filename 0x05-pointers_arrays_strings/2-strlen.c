#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: character to check
 * Return: 0 (success)
 */
int _strlen(char *s)
{
	int len = 0;

	for (; *s != '\0'; s++)
		len++;
	return (len);
}
