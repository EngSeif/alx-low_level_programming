#include "hash_tables.h"
/**
 * hash_table_get - Hash Table To Retrieve Value From.
 * @ht: Key In Hash Table To Be Found
 * @key: Key In Hash Table To Be Found
 *
 * Return: Value of Key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ind;
	hash_node_t *h_Node;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	ind = hash_djb2((const unsigned char *)key) % ht->size;
	if (ht->array[ind] == NULL)
		return (NULL);

	h_Node = ht->array[ind];
	while (h_Node != NULL)
	{
		if (strcmp(h_Node->key, key) == 0)
		{
			return (h_Node->value);
		}
		h_Node = h_Node->next;
	}
	return (NULL);
}
