#include "main.h"
#include <string.h>

/**
 * _strcat - function that concatenates two strings
 * @dest: parameter
 * @src: parameter
 * Return: pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *result;

	result = strcat(dest, src);
	return result;
}
