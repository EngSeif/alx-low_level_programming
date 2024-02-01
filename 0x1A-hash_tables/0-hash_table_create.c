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
	unsigned int i;

	if (size == 0) /* Check If The Size Is 0 */
		return (NULL);

	NewHash = malloc(sizeof(hash_table_t));

	if (NewHash == NULL) /* Check If There Is Wrong In Allocation */
		return (NULL);

	/* Allocate New Array for HashTable*/
	NewHash->array = malloc(sizeof(hash_node_t *) * size);

	if (NewHash->array == NULL)
	{
		free(NewHash);
		return (NULL);
	}

	/* Intialize All Elements To NULL */
	for (i = 0; i < size; i++)
		NewHash->array[i] = NULL;

	/* Assign The Size To HashTable*/
	NewHash->size = size;
	return (NewHash);
}
