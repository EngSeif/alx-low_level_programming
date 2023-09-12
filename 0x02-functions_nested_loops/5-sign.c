#include "main.h"

/**
 * print_sign - checks for sign of no
 *
 * Description: A C program that checks for sign no
 * @n : holds value of charcter ascii
 *
 * Return: Always 0 (Success)
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
