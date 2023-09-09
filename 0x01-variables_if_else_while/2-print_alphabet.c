#include <stdio.h>

/**
 * main - Entry point
 * print characters from a to z
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
