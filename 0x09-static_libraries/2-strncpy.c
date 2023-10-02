#include "main.h"

/**
 * *_strncpy - copies a string.
 *
 * @dest : holds 1st char valu
 *
 * @src : holds 2nd char value
 *
 * @n : bytes limit
 *
 * Return: void
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
