#include "main.h"

/**
 * print_rev - function that prints a string, in reverse,
 * @s: parameter checked
 * Return: void
 */
void print_rev(char *s)
{
	int a, b;

	for (a = 0; s[a] != 0x00; a++)
	{
	}
	for (b = a - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}

		_putchar(10);
}
