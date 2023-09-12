#include <stdio.h>

/**
 * main - Entry point
 * print an array of strings in a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char txt[] = "_putchar";

	int n = 0;

	while (txt[n] != 0x00)
	{
		putchar(txt[n]);
		n++;
	}
		putchar('\n');
		return (0);
}
