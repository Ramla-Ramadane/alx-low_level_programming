#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data
 * (n) of a dlistint_t linked list
 * @head: points to the head
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head != NULL)
	{
		for (; temp;)
		{
			sum += temp->n;
			temp = temp->next;
		}
	}
	else
	{
		return (0);
	}
		return (sum);
}
