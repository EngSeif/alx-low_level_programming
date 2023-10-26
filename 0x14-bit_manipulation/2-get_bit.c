#include "main.h"

/**
 * print_binary - converts binary to unsigned int
 * @n : hold decimal number value
 * Return: 1 (Success), or -1 (Fail)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index >= (sizeof(n) * 8))
	{
		return (-1);
	}

	return (n & mask) != 0;
}
