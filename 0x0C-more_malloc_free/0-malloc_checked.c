#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	int *i = malloc(b);

	if (i == 0)
		exit(98);

	return (i);
}
