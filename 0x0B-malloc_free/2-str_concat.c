#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: char
 * @s2: char
 * Return: pointer to a newly allocated space in memory
 * which contains the contents of s1,
 * followed by the contents of s2, and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *m;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = '\0';

	size1 = strlen(s1);
	size2 = strlen(s2);
	m = malloc((size1 + size2) * sizeof(char) + 1);

	if (m == 0)
		return (0);

	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			m[i] = s1[i];
		else
			m[i] = s2[i - size1];
	}
	m[i] = '\0';
	return (m);
}


/**
 * strlen - find length of a sting
 * @s: string
 * Return: int
 */

int strlen(char *s)
{
	int size = 0;

	for (size = 0; s[size] != '\0'; size++)
		;
	return (size);
}

