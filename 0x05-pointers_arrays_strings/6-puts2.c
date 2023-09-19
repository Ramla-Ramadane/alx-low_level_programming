#include "main.h"
#include <string.h>

/**
 * puts2 - function that prints every other character of a string
 * @str: parameter checked
 * Return: void
 */
void puts2(char *str)
{
	int a;
	int leng = strlen(str);

	for (a = 0; a < leng; a++)
	{
		if (str[a] % 2 != 1)
		{
			_putchar(str[a]);
		}
	}

		_putchar(10);
}
