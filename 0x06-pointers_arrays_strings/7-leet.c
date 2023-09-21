#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @e: parameter checked
 * Return: e
 */
char *leet(char *e)
{
	int c;

	for (c = 0; e[c] != 0x00; c++)
	{
		char i = e[c];

		if (i == 'a' || i == 'A')
		{
			e[c] = '4';
		}
		else if (i == 'e' || i == 'E')
		{
			e[c] = '3';
		}
		else if (i == 'o' || i == 'O')
		{
			e[c] = '0';
		}
		else if (i == 't' || i == 'T')
		{
			e[c] = '7';
		}
		else if (i == 'l' || i == 'L')
		{
			e[c] = '1';
		}
	}

			return (e);
}
