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
		return;
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%u", va_arg(number, unsigned int));
			if (separator == NULL)
			{
				;
			}
			else if (i < (n - 1))
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(number);
}
