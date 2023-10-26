#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: number
 * @m: number
 * Return: number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int num_to_flip = n ^ m;

	while (num_to_flip)
	{
		count += num_to_flip & 1;
		num_to_flip >>= 1;
	}
	return (count);
}
