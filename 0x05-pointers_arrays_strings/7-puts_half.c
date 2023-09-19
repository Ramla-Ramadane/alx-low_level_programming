#include "main.h"
#include <string.h>

/**
 * puts_half - function that prints half of a string
 * @str: parameter checked
 * Return: void
 */
void puts_half(char *str)
{
	int a;
	int leng = strlen(str);
	int n = leng / 2;

	if ((leng - 1) % 2 == 1)
	{
		for (a = n; a < leng; a++)
		{
			_putchar(str[a]);
		}
	}
	else
	{
		for (a = leng / 2; a < leng; a++)
		{
			_putchar(str[a]);
		}
	}

			_putchar(10);
}
