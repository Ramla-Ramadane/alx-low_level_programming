#include "lists.h"

/**
 * pop_listint - deletes the first node of a linked list
 * @head: points to the first node
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temporary;
	int nd_data;

	if (*head == NULL || head == NULL)
	{
		return (0);
	}
	else
	{
		nd_data = (*head)->n;
		temporary = (*head);
		(*head) = (*head)->next;
		free(temporary);
	}
	return (nd_data);
}
