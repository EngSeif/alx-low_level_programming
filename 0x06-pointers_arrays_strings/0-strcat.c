#include "main.h"

/**
 * *_strcat - concatenates two strings.
 *
 * @dest : holds 1st char valu
 *
 * @src : holds 2nd char value
 *
 * Return: void
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
		;
	j = j + 1;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i + j] = src[i];
	}
	dest[i + j] = '\0';

	return (dest);
}
