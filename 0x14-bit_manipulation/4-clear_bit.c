#include "main.h"

/**
 * clear_bit - set bit 0 at nth index
 * @n : hold decimal number
 * @index : nth bit
 * Return: 1 (Success), or -1 (Fail)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n &= ~mask;
	return (1);
}
