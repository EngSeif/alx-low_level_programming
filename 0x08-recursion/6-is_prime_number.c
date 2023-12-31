#include "main.h"

/**
 * is_prime_number - returns 1 if input int is prime num, other return 0
 * @n : number
 * @i : index of numbers
 * Return: int
*/

int oot(int n, int i);

int is_prime_number(int n)
{
	return (oot(n, 2));
}

/**
 * oot - checks for prime
 * @n : number which for prime is checked
 * @i : index of numbers
 * Return: int
*/

int oot(int n, int i)
{
	if (n > 1 && i >= n)
		return (1);
	else if (n % i == 0 || n <= 1)
		return (0);
	else
		return (oot(n, i + 1));
}
