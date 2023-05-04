#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * it will use at most n bytes from src
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: most number of bytes from @src
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n);
{
	int c, i;

	c = 0;

	while (dest[c] != '\0')
		c++;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[c] = src[i];
		c++;
		i++;
	}

	dest[c] = '\0';
	return (dest);
}
