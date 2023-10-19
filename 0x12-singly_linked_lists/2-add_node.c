#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - function that adds a new node at the beg of a list
 * @head: pointer to the first element
 * @str: pointer to the value of the list
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new_nd;

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
		new_nd->next = *head;
		*head = new_nd;
	}

	return (*head);
}
