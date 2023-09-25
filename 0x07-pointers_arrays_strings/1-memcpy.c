#include "main.h"
#include <string.h>

/**
 * _memcpy - function that copies memory area
 * @dest: pointer to destination
 * @src: pointer to the source
 * @n: number of bytes to copy
 * Return: result
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *result;

	result = memcpy(dest, src, n);

	return (result);
}
