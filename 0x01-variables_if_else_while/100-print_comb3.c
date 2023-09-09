#include <stdio.h>

/**
 * main - Entry point
 * print combination of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d, s;

	for (d = 0 ; d <= 9 ; d++)
	{
	for (s = d + 1 ; s <= 9 ; s++)
	{
		putchar(d + '0');
		putchar(s + '0');
		if (d != s)
		{
			putchar(',');
			putchar(' ');
		}
	}
	}

	putchar('\n');
	return (0);
}
