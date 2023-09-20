#include "main.h"
#include <string.h>

/**
 * _strcmp - function that compares two strings
 * @s1: parameter checked
 * @s2: parameter checked
 * Return: result
 */
int _strcmp(char *s1, char *s2)
{
	int compare;

	compare = strcmp(s1, s2);

	return (compare);
}
