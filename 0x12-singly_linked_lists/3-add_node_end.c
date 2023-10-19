#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - function that adds a new node at the end of a list
 * @head: pointer to the first node
 * @str: value of nodes
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new_nd;
	list_t *last_nd = *head;

	while (str[len])
		len++;
	new_nd = malloc(sizeof(list_t));
	if (new_nd == NULL)
	{
		return (NULL);
	}
	else
	{
		new_nd->str = strdup(str);
		new_nd->len = len;
		new_nd->next = NULL;
		if (*head == NULL)
		{
			*head = new_nd;
			return (new_nd);
		}
		while (last_nd->next)
		{
			last_nd = last_nd->next;
		}
		last_nd->next = new_nd;
	}
	return (new_nd);
}

