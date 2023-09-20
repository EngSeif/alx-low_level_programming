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
	int s2;
	int i;

	for (d1 = 0; dest[d1] != '\0'; d1++)
		;
	for (s2 = 0; src[s2] != '\0'; s2++)
		;
	for (i = 0; i < n; i++)
	{
	dest[i + d1] = src[i];
	}
	dest[i + n] = '\0';

	return (dest);
}
