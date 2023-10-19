#include "lists.h"
#include <stdio.h>

/**
 * list_len - function that returns the number of elements in a list
 * @h: pointer to the linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
