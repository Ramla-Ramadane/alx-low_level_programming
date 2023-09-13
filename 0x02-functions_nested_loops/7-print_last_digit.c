#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - Entry point
 * function that prints the last digit of a number
 * @d: character to be checked
 * Return: x Success
 */
int print_last_digit(int d)
{
	int x;

	x = d % 10;
	if (d < 0)
	{
		x = abs(d % 10);
	}

		_putchar(x + 48);
		return (x);
}
