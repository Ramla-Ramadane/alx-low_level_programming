#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	p = (char *)malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));

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
		if (n >= strlen(s2))
		{
			strcat(p, s2);
		}
		else
		{
			strncat(p, s2, n);
		}
	}

		return (p);
}
