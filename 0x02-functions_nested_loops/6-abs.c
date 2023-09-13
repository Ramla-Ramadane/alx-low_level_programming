#include "main.h"

/**
 * _abs - Entry point
 * function that computes the absolute value of an integer
 * @b: character to be checked
 * Return: 0 if Success
 */
int _abs(int b)
{
	if (b < 0)
	{
		return (b * -1);
	}
	else if (b >= 0)
	{
		return (b);
	}

		return (0);
}
