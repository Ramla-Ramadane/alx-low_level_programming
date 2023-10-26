#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1
 * Return: converted number if success or 0 if failure
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	unsigned int len = strlen(b);
	int position, lenght_str, count;

	if (b == NULL)
	{
		return (0);
	}
	for (lenght_str = 0; b[lenght_str]; lenght_str++)
	{
		if (b[lenght_str] != '1' && b[lenght_str] != '0')
		{
			return (0);
		}
	}
	for (count = len - 1, position = 0; count >= 0; count--, position++)
	{
		if (b[count] == '1')
		{
			number += (1 << position);
		}
	}

	return (number);
}
