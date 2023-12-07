#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node
 * at a given position
 * @h: points to the head
 * @idx: position of the node
 * @n: value of the new node
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_nd, *temp, *preven;
	unsigned int i = 1;

	new_nd = malloc(sizeof(dlistint_t));
	if (new_nd == NULL || *h == NULL)
	{
		return (NULL);
	}
	new_nd->n = n;
	temp = (*h)->next;
	preven = (*h);
	while (temp)
	if (idx == 0)
	{
		new_nd->next = (*h);
		(*h)->prev = new_nd;
		return (new_nd);
	}
	else
	{
		for (; temp; i++)
		{
			if (i == idx)
			{
				new_nd->next = temp;
				temp->prev = new_nd;
				preven->next = new_nd;
				return (new_nd);
			}
			preven = temp;
			temp = temp->next;
		}
	}
		return (NULL);
}


