#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: void
 * @old_size: unsigned int
 * @new_size: unsigned int
 * Return: 0
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);

		if (p == NULL)
			return (0);

		return (p);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size);

		if (p == NULL)
			return (0);

		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)p + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (p);
}
