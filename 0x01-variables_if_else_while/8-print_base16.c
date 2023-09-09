#include <stdio.h>

/**
 * main - Entry point
 * print numbers of base 16
 * Return: Always 0 (Success)
 */
int main(void)
{
	int h;

	for (h = '0' ; h <= '9' ; h++)
	{
		putchar(h);
	}
	for (h = 'a' ; h <= 'f' ; h++)
	{
		putchar(h);
	}

	putchar('\n');
	return (0);
}
