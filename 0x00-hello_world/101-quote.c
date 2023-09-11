#include <stdio.h>

/**
 * main - Entry point
 * print a string
 * Return: Always 1 (Success)
 */
int main(void)
{
	int c;

	char txt[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

		c = 0;
	
	while (txt[c] != '\0')
	{
		putchar(txt[c]);
		c++;
	}

		putchar('\n');
		return (1);
}
