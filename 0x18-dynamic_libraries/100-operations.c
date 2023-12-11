#include <stdio.h>

/**
 * add - add two numbers
 * @a: 1st int
 * @b: 2nd int
 * Return: a + b.
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtracts two numbers
 * @a: 1st int
 * @b: 2nd int
 * Return: a - b.
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - multiplies two numbers
 * @a: 1st int
 * @b: 2nd int
 * Return: a * b.
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - get two numbers div
 * @a: 1st int
 * @b: 2nd int
 * Return: a / b.
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error, Division By Zero\n");
		return (0);
	}
	return (a / b);
}
/**
 * mod - get two numbers modulus
 * @a: 1st int
 * @b: 2nd int
 * Return: a % b.
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error, Division By Zero\n");
		return (0);
	}
	return (a % b);
}
