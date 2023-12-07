#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 *  of a dlistint_t linked list
 *  @head: points to the head
 *  @index: is the index of the node
 *  starting from 0
 *  Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		while (head->prev != NULL)
		{
			head = head->prev;
		}
		for (; head != NULL; i++)
		{
			if (index == i)
			{
				break;
			}
			head = head->next;
		}
	}
		return (head);
}
