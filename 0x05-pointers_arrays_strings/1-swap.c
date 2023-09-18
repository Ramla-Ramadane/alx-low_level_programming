#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: parameter to be checked
 * @b: parameter to be checked
 * Return: void
 */
void swap_int(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}
