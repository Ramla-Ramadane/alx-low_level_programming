#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: parameter checked
 * Return: void
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (a = 1 ; a <= size ; a++)
		{
		for (c = 1 ; c <= size - a; c++)
		{
			_putchar(' ');
		}
		for (b = 1 ; b <= a ; b++)
		{
			_putchar('#');
		}

			_putchar(10);
		}
	}
}
