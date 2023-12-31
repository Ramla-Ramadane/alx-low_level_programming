#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers
 * @separator: string between numbers
 * @n: number of integers passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list number;

	va_start(number, n);

	if (n == 0)
	{
		printf("\n");
		va_end(number);
		return;
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(number, int));
			if (i < (n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(number);
}
