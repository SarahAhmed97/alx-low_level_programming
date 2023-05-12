#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: max numbers of bytes to br copied from src
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, c;

	i = 0;
	c = 0;

	while (src[i++])
		c++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = c; i < n; i++)
		dest[i] = '\0';

	return (dest);
}


