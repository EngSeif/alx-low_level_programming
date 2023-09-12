#include "main.h"

/**
 * print_last_digit - prints vlast figit
 *
 * Description: A C program that prints last digit
 * @n : holds value of ascii
 *
 * Return: Always 0 (Success)
*/

int print_last_digit(int n)
{
	int ld;

	if (n < 0)
	{
	ld = (-1) * (n % 10);
	}
	else
	{
	ld = n % 10;
	}
	return (ld);
}
