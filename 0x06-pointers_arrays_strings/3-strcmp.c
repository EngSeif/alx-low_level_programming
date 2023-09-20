#include "main.h"

/**
 * _strcmp - copies a string.
 *
 * @s1 : holds 1st char valu
 *
 * @s2 : holds 2nd char value
 *
 * Return: void
*/

int _strcmp(char *s1, char *s2)
{
	int i, c;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			c = ((int)*s1 - 48) - ((int)*s2 - 48);
		}
	}
	return (c);
}
