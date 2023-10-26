#include "main.h"

/**
 * set_bit - set bit at nth index
 * @n : hold decimal number
 * @index : nth bit
 * Return: 1 (Success), or -1 (Fail)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	*n |= mask;

	return (1);
}
