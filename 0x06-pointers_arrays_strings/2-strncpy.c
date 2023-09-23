#include "main.h"
/**
 * _strncpy - copies a string
 * @src: Source
 * @dest: Destination
 * @n: The length of int
 * Return: 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + 1); int n)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
