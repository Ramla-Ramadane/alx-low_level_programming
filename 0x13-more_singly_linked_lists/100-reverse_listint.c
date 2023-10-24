#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: points to the first node
 * Return: pointer to the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv = NULL;
	listint_t *curr = *head;
	listint_t *next = NULL;

	while (curr != NULL)
	{
		next = curr->next;
		curr->next = prv;
		prv = curr;
		curr = next;
	}
	*head = prv;

	return (*head);
}

