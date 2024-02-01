#include "hash_tables.h"

/**
 * hash_table_create - Create A New Hash Table
 *
 * @size: Size Of The New Hash Tables
 *
 * Return: A pointer To The New Hash Table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *NewHash;

	if (size == 0)
		return (NULL);
	NewHash = malloc(sizeof(hash_node_t));
	NewHash->size = size;
	return (NewHash);
}
