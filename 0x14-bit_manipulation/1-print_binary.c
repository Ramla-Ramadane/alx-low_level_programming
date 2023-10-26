#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal number
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		printf("0");
		return;
	}
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	printf("%ld", n & 1);
}
