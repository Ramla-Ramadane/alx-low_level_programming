#include "main.h"

/**
 * print_sign - Entry point
 * function that prints the sign of number
 * @n: character to be checked
 * Return: 0 if success
 */
int print_sign(int n)
{
	char x = '+';
	char a = '0';
	char s = '-';

	if (n > 0)
	{
		_putchar(x);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(a);
		return (0);
	}
	else if (n < 0)
	{
		_putchar(s);
		return (-1);
	}

		return (0);
}

