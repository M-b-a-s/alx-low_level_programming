#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @src: character
 * @dest: character
 * Return: character
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);

