#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: points to the first node
 * @n: data of the node
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_nd;
	listint_t *last_nd = *head;

	new_nd = malloc(sizeof(listint_t));

	if (new_nd == NULL)
	{
		return (NULL);
	}
	else
	{
		new_nd->n = n;
		new_nd->next = NULL;
		if (*head == NULL)
		{
			*head = new_nd;
			return (new_nd);
		}
		while (last_nd->next != NULL)
		{
			last_nd = last_nd->next;
		}
		last_nd->next = new_nd;
	}
	return (new_nd);
}
