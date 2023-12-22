#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: points to the hash table
 * Return: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nd;
	unsigned char comma = 0;
	unsigned long int count = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (; count < ht->size; count++)
	{
		if (ht->array[count] != NULL)
		{
			if (comma == 1)
			{
				printf(", ");
			}
			nd = ht->array[count];
			for (; nd != NULL;)
			{
				printf("'%s': '%s'", nd->key, nd->value);
				nd = nd->next;
				if (nd != NULL)
				{
					printf(", ");
				}
			}
			comma = 1;
		}
	}
	printf("}\n");
}

