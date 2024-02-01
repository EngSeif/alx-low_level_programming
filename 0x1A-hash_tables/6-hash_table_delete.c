#include "hash_tables.h"
/**
 * hash_table_delete - Delete Hash Table
 * @ht: Pointer To Hash Table
 *
 * Return: NULL
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *h_Node, *Tmp;

	for (i = 0; i < ht->size; i++)
	{
		h_Node = ht->array[i];
		while (h_Node != NULL)
		{
			Tmp = h_Node->next;
			free(h_Node->key);
			free(h_Node->value);
			free(h_Node);
			h_Node = Tmp;
		}
	}
	free(ht->array);
	free(ht);
}
