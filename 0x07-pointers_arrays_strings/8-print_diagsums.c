#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * @a: pointer to the array
 * @size: size of square matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int b, c;
	int result = 0;
	int result1 = 0;

	for (b = 0; b < size; b++)
	{
		for (c = 0; c < size; c++)
		{
			if (c == b)
			{
				result += a[b * size + c];
			}
			if (c + b == size - 1)
			{
				result1 += a[b * size + c];
			}
		}
	}
		printf("%d, %d\n", result, result1);
}

