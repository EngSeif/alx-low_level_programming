#include "hash_tables.h"
/**
 * key_index - a function that gives the index of a key.
 * @key: Key In Hash Table To Be Found
 * @size: size of Hash Table
 *
 * Return: Index Value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
