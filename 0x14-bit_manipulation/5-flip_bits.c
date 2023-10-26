#include "main.h"

/**
 * flip_bits - change from n to m
 * @n : hold n number
 * @m : hold m number
 * Return: 1 (Success), or -1 (Fail)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	int count = 0;

	while (xor > 0)
	{
		count += (xor & 1);
		xor >>= 1;
	}
	return (count);
}
