#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings
 * @separator: string printed before strings
 * @n: number of strings passed
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char  *string;
	va_list list_string;

	va_start(list_string, n);
	if (n == 0)
	{
		printf("\n");
		return;
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			string = va_arg(list_string, char*);
			string == NULL ? printf("(nil)") : printf("%s", string);

			if (separator != NULL && (i < (n - 1)))
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(list_string);
}

