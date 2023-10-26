#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal number
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int temporary;
	int change;

	if (n == 0)
	{
		printf("0");
		return;
	}
	for (temporary = n, change = 0; (temporary >>= 1) > 0; change++)
	{
		;
	}
	while (change >= 0)
	{
		if ((n >> change) & 1)
			printf("1");
		else
			printf("0");
		change--;
	}
}
