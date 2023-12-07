#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: points to the head
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
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
		printf("%d\n", h->n);
		h = h->next;
	}
		return (i);
}
