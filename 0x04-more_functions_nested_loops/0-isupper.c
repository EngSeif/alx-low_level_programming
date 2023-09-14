#include "main.h"

/**
 * isupper -vheck for upercase
 *
 * Description: A C program that checks for uppercase
 *
 * Return:(Success)
*/

int _isupper(int c)
{
	if ( c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
