#include "main.h"
#include <ctype.h>

/**
 * cap_string - function that capitalizes all words of a string
 * @c: parameter checked
 * Return: c
 */
char *cap_string(char *c)
{
	int a, b;
	char separators[] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
	'"', '(', ')', '{', '}'};

	for (a = 0; c[a] != 0x00; a++)
	{
		if (a == 0 && c[a] >= 'a' && c[a] <= 'z')
		{
			c[a] = toupper(c[a]);
		}

		for (b = 0; b <= 12; b++)
		{
			if (c[a] == separators[b] && (c[a + 1] >= 'a' && c[a + 1] <= 'z'))
			{
			c[a + 1] = toupper(c[a + 1]);
			}
		}

	}

			return (c);
}

