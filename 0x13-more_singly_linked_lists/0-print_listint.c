#include "lists.h"

/**
 * print_listint - function that prints all the elements of a linked list
 * @h: points to the struct
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
