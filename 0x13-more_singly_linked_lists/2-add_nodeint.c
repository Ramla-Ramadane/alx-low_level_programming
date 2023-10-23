#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: points to the first node
 * @n: data of the list
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nd;

	new_nd = malloc(sizeof(listint_t));

	if (new_nd == NULL)
	{
		return (NULL);
	}
	else
	{
		new_nd->n = n;
		new_nd->next = *head;
		*head = new_nd;
	}
	return (*head);
}
