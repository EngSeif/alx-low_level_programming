#include "main.h"

/**
 * *_strncat - concatenates two strings.
 *
 * @dest : holds 1st char valu
 *
 * @src : holds 2nd char value
 *
 * @n : bytes limit
 *
 * Return: void
*/

char *_strncat(char *dest, char *src, int n)
{
	int d1;
	int i;

	for (d1 = 0; dest[d1] != '\0'; d1++)
		;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
	dest[i + d1] = src[i];
	}
	dest[i + d1] = '\0';

	return (dest);
}
