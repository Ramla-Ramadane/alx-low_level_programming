#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index position
 * @head: points to the first node
 * @index: index of the node that should be deleted
 * Return: 1 success -1 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *del = NULL;
	listint_t *temporary = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		(*head) = (*head)->next;
		free(temporary);
		return (1);
	}
	else
	{
		for (; counter < index - 1; counter++)
		{
			if (temporary != NULL || (temporary->next != NULL))
				return (-1);
			temporary = temporary->next;
		}
		del = temporary->next;
		temporary->next = del->next;
		free(del);
	}

	return (1);
}

