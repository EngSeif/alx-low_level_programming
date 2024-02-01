#include "hash_tables.h"
/**
 * hash_table_get - Hash Table To Retrieve Value From.
 * @ht: Pointer To Hash Table
 *
 * Return: NULL
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, c1 = 0, c2 = 0;
	hash_node_t *Tmp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		Tmp = ht->array[i];
		while (Tmp != NULL)
		{
			c1++;
			Tmp = Tmp->next;
		}
	}

	if (c1 == 0)
	{
		printf("{}\n");
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		Tmp = ht->array[i];
		while (Tmp != NULL)
		{
			c2++;
			if (c2 < c1)
				printf("'%s': '%s', ", Tmp->key, Tmp->value);
			else
			{
				printf("'%s': '%s'}\n", Tmp->key, Tmp->value);
				return;
			}
			Tmp = Tmp->next;
		}
	}
}
