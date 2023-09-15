#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: parameter to be checked
 * Return: void
 */
void print_line(int n)
{
	int b;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (b = 0 ; b <= n; b++)
		{
			_putchar('_');
		}

		_putchar(10);
	}
}
