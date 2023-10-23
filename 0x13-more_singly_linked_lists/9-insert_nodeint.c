#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: points to the first node
 * @idx: position where the new node should be
 * @n: data of the nodes
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_nd;
	listint_t *temporary = *head;
	unsigned int counter = 0;

	new_nd = malloc(sizeof(listint_t));

	if (new_nd == NULL || head == NULL)
	{
		return (NULL);
	}
	new_nd->n = n;
	new_nd->next = NULL;
	if (idx == 0)
	{
		new_nd->next = (*head);
		*head = new_nd;
		return (new_nd);
	}
	for (; temporary && counter < idx; counter++)
	{
		if (counter == idx - 1)
		{
			new_nd->next = temporary->next;
			temporary->next = new_nd;
			return (new_nd);
		}
		else
		{
			temporary = temporary->next;
		}
	}
		return (NULL);
}
