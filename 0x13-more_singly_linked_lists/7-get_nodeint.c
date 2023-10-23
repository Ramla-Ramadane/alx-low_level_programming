#include "lists.h"

/**
 * get_nodeint_at_index - returns node at index of a linked list
 * @head: points to the first node
 * @index: index of thhe node, starting at 0
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temporary = head;
	unsigned int counter = 0;

	while (temporary && (counter < index))
	{
		temporary = temporary->next;
		counter++;
	}
	if (temporary == NULL)
	{
		return (NULL);
	}
	return (temporary);
}
