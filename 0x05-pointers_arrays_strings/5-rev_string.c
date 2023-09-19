#include "main.h"
#include <string.h>

/**
 * rev_string - function that reverses a string
 * @s: parameter checked
 * Return: void
 */
void rev_string(char *s)
{
	int len;
	int a, b;
	char c;

	len = strlen(s);
	a = 0;
	b = len - 1;
	while (a < b)
	{
		c = s[a];
		s[a] = s[b];
		s[b] = c;
		a++;
		b--;
	}

}
