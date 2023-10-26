#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1
 * @n: points to the value
 * @index: given index of bit to set
 * Return: 1 success or -1 if failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set_value;

	if (index > 64)
	{
		return (-1);
	}
	set_value = 1 << index;
	*n |= set_value;
	return (1);
}
