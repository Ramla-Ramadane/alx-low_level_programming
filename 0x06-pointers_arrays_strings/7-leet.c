#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @e: parameter checked
 * Return: e
 */
char *leet(char *e)
{
	char *result = e;
	char letter[] = "aAeEoOtTlL";
	char number[] = "4433007711";
	int c;

	for (; *e; e++)
	{
		for (c = 0; c < 10; c++)
		{
			if (*e == letter[c] || *e == letter[c] - 32)
			{
				*e = number[c];
				break;
			}
		}
	}

			return (result);
}
