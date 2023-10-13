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
	int arg, arg_int;
	double arg_double;
	char *string;
	va_list print;

	va_start(print, format);
	while (*p)
	{
		switch (*p)
		{
			case 'c':
				{
					arg = va_arg(print, int);
					printf("%c", arg);
					break;
				}
			case 'i':
				{
					arg_int = va_arg(print, int);
					printf("%d", arg_int);
					break;
				}
			case 'f':
				{
					arg_double = va_arg(print, double);
					printf("%f", arg_double);
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
