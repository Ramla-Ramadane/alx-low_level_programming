#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sums of all its parameters
 * @n: constant of type int
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);

	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			sum = sum + va_arg(numbers, int);
		}
	}
		return (sum);
		va_end(numbers);
}
