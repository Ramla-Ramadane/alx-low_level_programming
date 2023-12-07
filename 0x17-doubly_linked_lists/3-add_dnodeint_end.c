#include "lists.h"

/**
 * add_dnodeint_end -  function that adds a new node
 * at the end of a dlistint_t list
 * @head: points to the head
 * @n: value of the new node
 * Return: address of the new element
 * or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_nd, *temp = *head;

	new_nd = malloc(sizeof(dlistint_t));
	if (new_nd == NULL)
	{
		return (NULL);
	}
	new_nd->n = n;
	if (temp == NULL)
	{
		(*head) = new_nd;
	}
	else
	{
		for (; temp->next != NULL;)
		{
			temp = temp->next;
		}
		temp->next = new_nd;
		new_nd->prev = temp;
	}
		return (new_nd);
}
