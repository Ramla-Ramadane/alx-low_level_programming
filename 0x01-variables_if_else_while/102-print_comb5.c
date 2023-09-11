#include <stdio.h>

/**
 * main - Entry point
 * print a combination of two two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r, a;

	for (r = 0 ; r <= 99 ; r++)
	{
	for (a = r + 1 ; a <= 99 ; a++)
	{
		putchar((r / 10) + '0');
		putchar((r % 10) + '0');
		putchar(' ');
		putchar((a / 10)  + '0');
		putchar((a % 10)  + '0');
	if ((r < a && r != 98) || a != 99)
	{
		putchar(',');
		putchar(' ');
	}
	}
	}

		putchar('\n');
		return (0);
}
