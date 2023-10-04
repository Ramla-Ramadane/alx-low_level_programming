#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: pointer to s1 + s2
 */
char *str_concat(char *s1, char *s2)
{
	char *p;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}

	p = (char *)malloc((strlen(s1) + strlen(s2)) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		if (s1 != NULL)
		{
			strcpy(p, s1);
		}
		if (s2 != NULL)
		{
			strcat(p, s2);
		}
	}

		return (p);
}
