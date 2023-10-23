#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: points to the first node
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temporary;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		temporary = (*head)->next;
		free(*head);
		(*head) = temporary;
	}
	*head = NULL;
}

