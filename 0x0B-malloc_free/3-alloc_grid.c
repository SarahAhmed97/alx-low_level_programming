#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid -  pointer to a 2 dimensional array of integers
 * @width: int
 * @height: int
 * Return: 2D array or  NULL on failure, If width or height is 0 or negative.
 */

int **alloc_grid(int width, int height)
{
	int **tab, i, j;

	tab = malloc(sizeof(*tab) * height);

	if (width <= 0 || height <= 0 || tab == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < heigght; i++)
		{
			tab[i] = malloc(sizeof(**tab) * width);
			if (tab[i] == 0)
			{
				while (i--)
					free(tab[i]);
				free(tab);
				return (0);
			}
			for (j = 0; j < width; j++)
				tab[i][j] = 0;
		}
	}
	return (tab);
}
