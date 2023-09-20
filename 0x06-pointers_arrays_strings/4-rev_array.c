#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers.
 *
 * @a : holds array valu
 *
 * @n : holds num of elements
 *
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		a[i] = a[n - i - 1];
	}
}
