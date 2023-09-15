#include "main.h"

/**
 * more_numbers -  function that prints 10 times the numbers, from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int n;
	int c;

	n = 0;
	while (n <= 9)
	{
		c = 0;
		while (c <= 14)
		{
			if (c >= 10)
			_putchar((c / 10) + 48);
			_putchar((c % 10) + 48);
			c++;
		}

		_putchar(10);
		n++;
	}
}
