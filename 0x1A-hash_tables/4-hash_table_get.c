#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get -  function that retrieves a value associated with a key
 * @ht: points to the hash table
 * @key: is the key to get the value
 * Return: value associated with the element
 * or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *nd;
	unsigned long int i;

	if (key == NULL || ht == NULL || *key == '\0')
	{
		return (NULL);
	}
	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
	{
		return (NULL);
	}
	nd = ht->array[i];
	while (nd && strcmp(nd->key, key) != 0)
	{
		nd = nd->next;
	}
	if (nd == NULL)
	{
		return (NULL);
	}
	else
	{
		return (nd->value);
	}
}

