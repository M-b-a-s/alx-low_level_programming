#include "main.h"
/**
 * _memcpy - function that copies a memory area
 * @n: function copies @n bytes
 * @src: from memory area @src
 * @dest: to memory area @dest
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
