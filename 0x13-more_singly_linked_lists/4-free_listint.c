#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: points to the first node
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temporary;

	while (head)
	{
		temporary = head->next;
		free(head);
		head = temporary;
	}
}
