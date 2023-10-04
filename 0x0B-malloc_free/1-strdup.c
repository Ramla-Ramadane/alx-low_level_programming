#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that return pointer to a newly allocated space in memory
 * @str: pointer to a string
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *d;
	int size;

	if (str == NULL)
	{
		return (NULL);
	}

	size = strlen(*&str);
	d = (char *)malloc((size + 1) * sizeof(char));

	if (d == NULL)
	{
		return (NULL);
	}
	else
	{
		d = strcpy(d, str);
	}

		return (d);
}
