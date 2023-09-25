#include "main.h"

/**
 * *_strchr - locates a character in a string
 *
 * @s : holds 1st mem
 *
 * @c : holds 2nd mem
 *
 * Return: void
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
