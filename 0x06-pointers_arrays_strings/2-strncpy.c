#include "main.h"
#include <string.h>

/**
 * _strncpy - function that copies a string
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *copy;

	copy = strncpy(dest, src, n);

	return (copy);
}
