#include "main.h"

/**
 * isLower - detect lowercase
 *
 * @c : holds char values
 *
 * Return: void
*/

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - detect delimiters
 *
 * @c : holds char values
 *
 * Return: void
*/

int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"()[]";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
 * *cap_string - capitalizes all words of a string.
 *
 * @s : holds char values
 *
 * Return: void
*/

char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelimit = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			foundDelimit = 1;
		else if (isLower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		s++;
	}
	return (ptr);
}
