#include "main.h"

/**
 * _islower - Entry point
 * checks if a character is uppercase
 * @c: character to check
 * Return: 1 if c is lowercase and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
