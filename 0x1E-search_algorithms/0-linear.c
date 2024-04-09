#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: the item
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (array == NULL)
	{
		return (-1);
	}

	while ((size_t) i < size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}

	return (-1);
}
