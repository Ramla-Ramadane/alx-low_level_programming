#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * @str: parameter checked
 * Return: void
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != 0x00; a++)
	{
		if (str[a] % 2 != 1)
		{
			_putchar(str[a]);
		}
	}

		_putchar(10);
}
