#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - adds two numbers
 * @a : first int
 * @b : second int
 * Return: result.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts two numbers
 * @a : first int
 * @b : second int
 * Return: result.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two numbers
 * @a : first int
 * @b : second int
 * Return: result.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two numbers
 * @a : first int
 * @b : second int
 * Return: result.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of div of two numbers
 * @a : first int
 * @b : second int
 * Return: result.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
