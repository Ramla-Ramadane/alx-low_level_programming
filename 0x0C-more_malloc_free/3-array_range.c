#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: values
 * @max: values
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int b;
	int *p;

	if (min > max)
	{
		return (NULL);
	}

	p = (int *)malloc((max - min + 1) * sizeof(int));

	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (b = 0; b < (max - min + 1); b++)
		{
			p[b] = min + b;
		}
	}

		return (p);
}
