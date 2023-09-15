#include "main.h"

/**
 * print_square - function that prints a square
 * @size: parameter checked
 * Return: void
 */
void print_square(int size)
{
	int a;
	int b;

	a = 1;
	b = 1;
	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		while (a <= size)
		{
			while (b <= size)
			{
				_putchar('#');
				b++;
			}
				_putchar(10);
				a++;
				b = 1;
		}
	}
}
