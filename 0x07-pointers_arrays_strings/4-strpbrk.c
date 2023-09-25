#include "main.h"
#include <string.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: pointer to the string searched
 * @accept: pointer to the strig contaning characters searched
 * Return: result
 */
char *_strpbrk(char *s, char *accept)
{
	char *result;

	result = strpbrk(s, accept);

	return (result);
}
