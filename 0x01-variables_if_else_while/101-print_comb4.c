#include <stdio.h>

/**
 * main - Entry point
 * print a combination of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, s, t;

	for (n = 0 ; n <= 9 ; n++)
	{
	for (s = n + 1 ; s <= 9 ; s++)
	{
	for (t = s + 1 ; t <= 9 ; t++)
	{
		putchar(n + '0');
		putchar(s + '0');
		putchar(t + '0');
	if (n < s && s < t && n != 7)
	{
		putchar(',');
		putchar(' ');
	}
	}
	}
	}
		putchar('\n');
		return (0);
}
