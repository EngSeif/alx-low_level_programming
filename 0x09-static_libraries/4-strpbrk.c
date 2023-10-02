#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 *
 * @s : holds 1st mem
 *
 * @accept : holds 2nd mem
 *
 * Return: void
*/

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
		}
	}
	return (0);
}
