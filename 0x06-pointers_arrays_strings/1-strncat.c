#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenates two strings
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result;

	result = strncat(dest, src, n);

	return (result);
}
