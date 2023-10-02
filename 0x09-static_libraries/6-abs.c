#include "main.h"

/**
 * _abs - checks for sign of no
 *
 * Description: A C program that checks for sign no
 * @n : holds value of ascii
 *
 * Return: Always 0 (Success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
