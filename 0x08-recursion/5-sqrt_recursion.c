#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n : number which for sqrt is calc
 * @val : helps to check if num has a sqrt
 * Return: int
*/

int sqroot(int n, int val);

int _sqrt_recursion(int n)
{
	return (sqroot(n, 1));
}

/**
 * sqrt - checks for avaliabilty of sqrt
 * @n : number which for sqrt is calc
 * @val : helps to check if num has a sqrt
 * Return: int
*/

int sqroot(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (sqroot(n, val + 1));
	else
		return (-1);
}
