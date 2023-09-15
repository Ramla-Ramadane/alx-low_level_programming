#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: parameter checked
 * Return: void
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (a = 1 ; a <= n ; a++)
		{
			for (b = 1 ; b < a ; b++)
			{
				_putchar(' ');
			}
			{
				_putchar('\\');
				_putchar(10);
			}
		}
	}
}
