#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a : holds 1st int value
 *
 * @b : holds 2nd int value
 *
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
