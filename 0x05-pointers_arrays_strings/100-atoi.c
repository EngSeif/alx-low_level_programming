#include "main.h"

/**
 * _atoi - convert a string to an integer.
 *
 * @s : holds the str value
 *
 * Return: void
*/

int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 0;


	do {
		if (*s == '-')
		{
			sign *= -1;
		} else if (*s >= '0' && *s <= '9')
		{
			num = (num * 10) + (*s - '0');
		}
	} while (*s++);
	return (num * sign);
}
