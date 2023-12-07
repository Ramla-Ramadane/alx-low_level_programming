#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at
 * the beginning of a dlistint_t list
 * @head: points to the head
 * @n: value of the new node
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nd;

	new_nd = malloc(sizeof(dlistint_t));

	if (new_nd == NULL || head == NULL)
	{
		return (NULL);
	}
	if (*head != NULL)
	(*head)->prev = new_nd;
	new_nd->n = n;
	new_nd->next = (*head);
	(*head) = new_nd;
	return (new_nd);
}
