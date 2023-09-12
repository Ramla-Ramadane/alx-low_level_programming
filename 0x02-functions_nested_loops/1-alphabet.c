#include "main.h"

/**
 * print_alphabet - entry point
 * prints from a to z in lower case
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int a;

	for (a = 'a' ; a <= 'z' ; a++)
	{
		_putchar(a);
	}

	_putchar(10);
}
