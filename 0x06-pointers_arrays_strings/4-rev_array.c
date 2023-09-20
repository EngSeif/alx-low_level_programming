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
	int i = 0;
	int j = n - 1;
	int t;

	while (i < j)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
		i++;
		j--;
	}
}
