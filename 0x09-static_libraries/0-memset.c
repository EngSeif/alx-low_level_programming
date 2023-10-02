#include "main.h"

/**
 * *_memset - memory area pointed
 *
 * @s : holds 1st
 *
 * @b : holds value of byte
 *
 * @n : holds no of bytes
 *
 * Return: void
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
