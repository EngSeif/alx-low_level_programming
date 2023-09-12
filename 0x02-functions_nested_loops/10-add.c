#include "main.h"

/**
 * times_table - prints times table
 *
 * Description: A C program that prints times table
 *
 * @i : first num
 *
 * @j : second num
 *
 * Return: Always 0 (Success)
*/

int add(int i, int j);
{
	int i;
	int j;
	int s;

	s = i + j;

	if (s / 10 == 0)
	{
		_putchar(s + 48);
		_putchar('\n');
	}
	else
	{
		_putchar((s / 10) + 48);
		_putchar((s % 10) + 48);
	}
}
