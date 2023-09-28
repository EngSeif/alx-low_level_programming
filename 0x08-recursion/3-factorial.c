#include "main.h"

/**
 * factorial - calculates fact of a num
 * @n : value to be factorial calculated
 * Return: void
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
