#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: parameter to be checked
 * Return: void
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (a = 1 ; a <= n ; a++)
		{
			for (b = 1 ; b <= n ; b++)
			{
				if (b < a)
				_putchar(' ');
				else if (b == a)
				_putchar('\\');
			}

				_putchar(10);
		}

	}
}
