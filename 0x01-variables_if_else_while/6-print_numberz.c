#include <stdio.h>

/**
 * main - Entry point
 * print integers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, z;

	for (n = 0 ; n <= 9 ; n++)
	{
		z = n + '0';
		putchar(z);
	}

	putchar('\n');
	return (0);
}
