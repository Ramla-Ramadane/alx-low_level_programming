#include "lists.h"

/**
 * sum_listint - returns the sum of all data in a linked list
 * @head: points to the first node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
