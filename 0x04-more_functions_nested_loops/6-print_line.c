#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: parameter to be checked
 * Return: void
 */
void print_line(int n)
{
	int b;

	b = 0;
	if (n < 0 || n == 0)
	{
		_putchar(10);
	}
	else
	{
		while (b <= n)
		{
			_putchar('_');
			b++;
		}

		_putchar(10);
	}
}
