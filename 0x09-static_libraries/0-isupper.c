#include "main.h"

/**
 * _isupper -vheck for upercase
 *
 * Description: A C program that checks for uppercase
 *
 * @c : holds ascii value
 *
 * Return:(Success)
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
