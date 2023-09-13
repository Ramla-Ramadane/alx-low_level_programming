#include "main.h"

/**
 * _isalpha - Entry point
 * checsk if a character is lower or uppercase
 * @c: the character to check
 * Return: 1 if c is a letter, lowercase or uppercase
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
