#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: parameter checked
 * @height: parameter checked
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int f;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	else
	{
		for (f = 0; f < height; f++)
		{
			free(grid[f]);
		}

			free(grid);
	}
}
