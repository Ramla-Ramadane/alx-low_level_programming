#include "main.h"
#include <ctype.h>

/**
 * cap_string - function that capitalizes all words of a string
 * @c: parameter checked
 * Return: c
 */
char *cap_string(char *c)
{
	int s = 0;
	int k;
	char separate[] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
	'"', '(', ')', '{', '}'};

	while (c[s] != 0x00)
	{
		if (isalpha(c[s]) && !isalpha(c[s - 1]))
		{
			c[s] = toupper(c[s]);
		}
		else
		{
			c[s] = tolower(c[s]);
		}
		for (k = 0; k <= 12; k++)
		{
			if (c[s] == separate[k])
			{
				if (isalpha(c[s + 1]))
				{
					c[s] = toupper(c[s]);
				}
			}
	}
		c++;
	}

			return (c);
}

