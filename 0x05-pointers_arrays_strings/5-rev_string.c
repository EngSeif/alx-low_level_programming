#include "main.h"

/**
 * rev_string -  a function that reverses a string
 *
 * @s : holds string value
 *
 * Return: void
*/

void rev_string(char *s)
{
	int i, l;
	char temp;

	for (l = 0; s[l] != '\0'; ++l)
		;

	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = temp;
	}
}
