#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that frees a linked list
 * @head: pointer to the first node
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temporary;

	while (head)
	{
		temporary = head->next;
		free(head->str);
		free(head);
		head = temporary;
	}
}
