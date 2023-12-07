#include "lists.h"

/**
 * free_dlistint -  function that frees a dlistint_t list
 * @head: points to the head
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *temp1;

	if (head == NULL)
	{
		return;
	}
	temp = head;
	for (; temp != NULL;)
	{
		temp1 = temp->next;
		free(temp);
		temp = temp1;
	}
}
