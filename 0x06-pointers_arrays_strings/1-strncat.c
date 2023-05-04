#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: most number of bytes from @src
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n);
{
	int c, i;

	c = 0;

	while (dest[c])
		c++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + 1] = src[i];

	dest[c + 1] = '\0';

	return (dest);
}
