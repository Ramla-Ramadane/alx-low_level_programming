#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @size: size of the array
 * @c: char that initializes the array
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}

	p = (char *)malloc(size * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (n = 0; n < size; n++)
		{
			*&p[n] = c;
		}

		return (p);
	}
}
