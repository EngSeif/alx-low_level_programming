#include "main.h"
#include <stdio.h>
/**
 * squareRoot - cal square root
 *
 * @a : holds value
 *
 * Return: Always 0 (Success)
*/
double squareRoot(double a)
{
double i = 0;
double j = a / 2;

while (j != i)
{
i = j;
j = (a / i + i) / 2;
}

return (j);

}
/**
 * large_prime - large prime
 *
 * @a : holds value
 *
 * Return: Always 0 (Success)
*/

void large_prime(long int a)
{
	int p, L;

	while (a % 2 == 0)
		a = a / 2;
	for (p = 3; p <= squareRoot(a); p += 2)
	{
		while (a % p == 0)
		{
			a = a / p;
			L = p;
		}
	}
	if (a > 2)
		L = a;
	printf("%d\n", L);
}
/**
 * main - Entry point
 *
 * Description: A C program that prints fizz buzz
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	large_prime(612852475143);

	return (0);
}
