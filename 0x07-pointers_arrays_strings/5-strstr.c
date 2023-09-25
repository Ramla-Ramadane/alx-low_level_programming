#include "main.h"
#include <string.h>

/**
 * _strstr - function that locates a substring
 * @haystack: pointer to string searched
 * @needle: pointer to the substring  want to find
 * Return: result
 */
char *_strstr(char *haystack, char *needle)
{
	char *result;

	result = strstr(haystack, needle);

	return (result);
}
