#include "main.h"

/**
 * *_memcpy - a function that copies memory area.
 *
 * @s : holds 1st mem
 *
 * @src : holds 2nd mem
 *
 * @n : holds no of bytes
 *
 * Return: void
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}
	return (dest);
}
