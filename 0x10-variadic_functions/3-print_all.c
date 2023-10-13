#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed
 * Return: void
 */
void print_all(const char * const format, ...)
{
	const char *p = format;
	va_list print;

	va_start(print, format);
	while (*p)
	{
		switch (*p)
		{
			case 'c':
				{
					printf("%c", va_arg(print, int));
					break;
				}
			case 'i':
				{
					printf("%d", va_arg(print, int));
					break;
				}
			case 'f':
				{
					printf("%f", va_arg(print, double));
					break;
				}
			case 's':
				{
					if (va_arg(char *) == NULL)
					{
						printf("(nil)");
					}
					if (va_arg(char *) != NULL)
					{
						printf("%s", va_arg(char *));
					}
					break;
				}
		}
		p++;
	}
	printf("\n");
	va_end(print);
}
