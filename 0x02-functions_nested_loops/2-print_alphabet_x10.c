#include "main.h"

/**
 * print_alphabet_x10 - entry point
 * print alphabet 10 times
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char c;
	int n;

	n = 0;

	while (n <= 9)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		n++;
	}
}
