#include "main.h"
#include <limits.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: value
 * @index: is the index
 * Return: the value of the bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int shift;

	if (index > UINT_MAX)
	{
		return (-1);
	}
	shift = (n >> index) & 1;
	return (shift);
}


