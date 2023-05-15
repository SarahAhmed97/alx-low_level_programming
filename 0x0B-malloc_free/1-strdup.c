#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: char
 * Return: pointer to the duplicated string or NULL.
 */

char *_strdup(char *str)
{
	int i, size = 0;
	char *m;

	if (str == NULL)
		return (0);

	for (i = 0; str[size] != '\0'; size++)
		;

	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
	{
		return (0);
	}

	else
	{
		for (i = 0; i < size; i++)
			m[i] = str[i];
	}
	return (m);
}
