#include "main.h"
#include <string.h>

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to the block of memory
 * @b: value to fill it with
 * @n: number of bytes to fill
 * Return: result
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *result;

	result = memset(s, b, n);

	return (result);
}
