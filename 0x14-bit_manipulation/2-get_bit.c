#include "main.h"

/**
 * get_bit - get bit at nth index
 * @n : hold decimal number
 * @index : nth bit
 * Return: 1 (Success), or -1 (Fail)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index >= (sizeof(n) * 8))
	{
		return (-1);
	}

	return (!!(n & mask));
}
