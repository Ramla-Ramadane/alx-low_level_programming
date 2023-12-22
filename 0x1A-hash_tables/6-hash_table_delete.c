#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: points to the hash table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int count = 0;
	hash_table_t *head = ht;
	hash_node_t *nd, *temp;

	for (; count < ht->size; count++)
	{
		if (ht->array[count] != NULL)
		{
			nd = ht->array[count];
			for (; nd != NULL;)
			{
				temp = nd->next;
				free(nd->key);
				free(nd->value);
				free(nd);
				nd = temp;
			}
		}
	}
	free(head->array);
	free(head);
}
