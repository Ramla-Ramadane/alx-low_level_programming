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
	char *string;
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
					string = va_arg(print, char*);
					if (string == NULL)
					{
						printf("(nil)");
					}
					if (string != NULL)
					{
						printf("%s", string);
					}
					break;
				}
		}
		p++;
	}
	printf("\n");
	va_end(print);
}
