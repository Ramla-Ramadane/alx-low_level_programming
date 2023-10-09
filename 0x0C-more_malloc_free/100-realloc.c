#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block
 * @ptr: pointer to previous allocated memory
 * @old_size: size in bytes
 * @new_size: size in bytes
 * Return: pointer to the new allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *np;
	unsigned int copy_bytes;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size * sizeof(int)));
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		np = malloc(new_size * sizeof(int));

		if (new_size > old_size)
		{
			copy_bytes = old_size;
		}
		if (new_size < old_size)
		{
			copy_bytes = new_size;
		}

		memcpy(np, ptr, copy_bytes);
	}

		free(ptr);
		return (np);
}
