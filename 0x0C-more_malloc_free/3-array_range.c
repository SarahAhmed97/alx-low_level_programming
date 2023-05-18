#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: int
 * @max: int
 * Return: 0
 */

int *array_range(int min, int max)
{
	int len, i;
	int *ptr;

	if (min > max)
		return (0);

	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);

	if (!ptr)
		return (0);

	for (i = 0; i < len; i++)
		ptr[i] = min++;

	return (ptr);
}
