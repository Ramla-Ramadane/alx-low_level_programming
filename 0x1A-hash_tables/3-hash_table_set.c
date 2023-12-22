#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: points to the hash table
 * @key: points to the key
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *copy;
	hash_node_t *new_value;
	unsigned long int idx, count;

	if (key == NULL || ht == NULL || *key == '\0' || value == NULL)
	{
		return (0);
	}
	copy = strdup(value);
	if (copy == NULL)
	{
		return (0);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	for (count = idx; ht->array[count]; count++)
	{
		if (strcmp(ht->array[count]->key, key) == 0)
		{
			free(ht->array[count]->value);
			ht->array[count]->value = copy;
			return (1);
		}
	}
	new_value = malloc(sizeof(hash_node_t));
	if (new_value == NULL)
	{
		free(copy);
		return (0);
	}
	new_value->key = strdup(key);
	if (new_value->key == NULL)
	{
		free(new_value);
		return (0);
	}
	new_value->value = copy;
	new_value->next = ht->array[idx];
	ht->array[idx] = new_value;

	return (1);
}
