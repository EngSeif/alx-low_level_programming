#include "main.h"

/**
 * *rot13 - encodes a string using rot13.
 *
 * @s : holds char values
 *
 * Return: void
*/

char *rot13(char *s)
{
	int i;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char Rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = s;

	while (*s)
	{
		for (i = 0;  i <= 52; i++)
		{
			if (*s == rot13[i])
			{
				*s = Rot13[i];
				break;
			}
		}
		s++;
	}

	return (s);
}
