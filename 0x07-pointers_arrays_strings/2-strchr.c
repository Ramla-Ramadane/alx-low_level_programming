#include "main.h"
#include <string.h>

/**
 * _strchr - function that locates a character in a string
 * @s: pointer to the string
 * @c: character searched in the string
 * Return: result
 */
char *_strchr(char *s, char c)
{
	char *result;

	result = strchr(s, c);

	return (result);
}
