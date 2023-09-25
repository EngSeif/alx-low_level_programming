#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers.
 * @a: matrix
 * @size : size of matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
int i, s1 = 0, s2 = 0;

for (i = 0; i < 3; i++)
{
	s1 += a[i];
	s2 += a[size - i - 1];
	a += size;
}
printf("%d, %d\n", s1, s2);
}
