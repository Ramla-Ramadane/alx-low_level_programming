#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a matrix
 * @width: row
 * @height: column
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, k;
	int print = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	p = (int **)malloc(width * sizeof(int *));

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		p[i] = (int *)malloc(height * sizeof(int));
		if (p[i] == NULL)
		{
			free(p);
			for (k = 0; k <= i; k++)
			{
				free(p[k]);
			}
			return (NULL);
		}
	}

	for (i = 0; i < width; i++)
	{
	for (k = 0; k < height; k++)
	{
	p[i][k] = print;
	}
	}

		return (p);
}
