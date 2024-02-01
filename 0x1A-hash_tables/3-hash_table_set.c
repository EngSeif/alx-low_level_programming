#include "hash_tables.h"
/**
 * hash_table_set -  adds an element to the hash table.
 *
 * @ht: hash table to add or update the key/value to.
 * @key: Key In Hash Table To Be Found.
 * @value: value associated with the key.
 *
 * Return: 1 If Success Else 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ind;
	hash_node_t *h_Node;

	if (ht == NULL || strlen(key) == 0 || key == NULL)
		return (0);
	ind =  hash_djb2((const unsigned char *)key) % ht->size;
	h_Node = ht->array[ind];
	while (h_Node != NULL)
	{
		if (strcmp(h_Node->key, key) == 0)
		{
			free(h_Node->value);
			h_Node->value = strdup(value);
			if (h_Node->value == NULL)
				return (0);
			return (1);
		}
		h_Node = h_Node->next;
	}
	h_Node = malloc(sizeof(hash_node_t));
	if (h_Node == NULL)
		return (0);
	if (ind >= ht->size)
		return (0);
	h_Node->key = strdup(key);
	h_Node->value = strdup(value);
	if (h_Node->key == NULL || h_Node->value == NULL)
	{
		free(h_Node->key);
		free(h_Node->value);
		free(h_Node);
		return (0);
	}
	h_Node->next = ht->array[ind];
	ht->array[ind] = h_Node;
	return (1);
}
