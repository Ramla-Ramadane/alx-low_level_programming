#include <stdio.h>

/**
 * main - Entry point
 * print alphabet and skip q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;


	for (c = 'a' ; c <= 'z' ; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}

	putchar('\n');
	return (0);
}
