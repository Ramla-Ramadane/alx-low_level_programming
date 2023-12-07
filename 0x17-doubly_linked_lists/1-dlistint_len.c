#include "lists.h"

/**
 * dlistint_len - function returns the number of elements
 * in a linked dlistint_t list
 * @h: points to the head
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	if (h == NULL)
	{
		return (0);
	}
	while (h->prev != NULL)
	{
		h = h->prev;
	}
	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
		return (i);
}

