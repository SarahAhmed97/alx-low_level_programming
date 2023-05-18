#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: int
 * @size: int
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (0);

	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (0);

	_memset(m, 0, sizeof(int) * nmemb);

	return (m);
}

/**
 * _memset - fills memory with a constant byte
 * @s: int
 * @b: int
 * @n: int
 * Reurn: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;

	return (ptr);
}
