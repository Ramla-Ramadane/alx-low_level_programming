#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 * Return: the index
 */
int binary_search(int *array, size_t size, int value)
{
	int start = 0, middle, end, index;

	if (size == 0 || array == NULL)
	{
		return (-1);
	}
	end = size - 1;
	while (start <= end)
	{
		printf("Searching in array: ");
		for (index = start; index <= end; index++)
		{
			printf(index < end ? "%d, " : "%d\n", array[index]);
			middle = (end + start) / 2;
		}
		if (array[middle] < value)
		{
			start = middle + 1;
		}
		else if (array[middle] > value)
		{
			end = middle - 1;
		}
		else
		{
			return (middle);
		}
	}
	return (-1);
}
