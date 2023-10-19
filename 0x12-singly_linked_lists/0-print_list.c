#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints all the elements of a list
 * @h: pointer to the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		counter++;
	}

		return (counter);
}
