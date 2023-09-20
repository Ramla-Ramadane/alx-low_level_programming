#include "main.h"
#include <ctype.h>

/**
 * string_toupper - function that changes lower to uppercase
 * @u: parameter checked
 * Return: result
 */
char *string_toupper(char *u)
{
	int c;

	for (c = 0; u[c] != 0x00; c++)
	{
		if (islower(u[c]))
		{
			u[c] = toupper(u[c]);
		}
	}

			return (u);
}
