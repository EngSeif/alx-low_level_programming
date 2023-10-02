#include "main.h"

/**
 * _isdigit -vheck for digits
 *
 * Description: A C program that checks for digits
 *
 * @c : holds ascii value
 *
 * Return:(Success)
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
