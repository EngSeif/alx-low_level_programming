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
	int i = 0;

	while (s[i])
		i++;
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
