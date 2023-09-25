#include "main.h"
#include <string.h>

/**
 * _strspn -  function that gets the length of a prefix substring
 * @s: pointer to string analyzed
 * @accept: pointer to string containing match characters
 * Return: result
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int result;

	result = strspn(s, accept);

	return (result);
}
