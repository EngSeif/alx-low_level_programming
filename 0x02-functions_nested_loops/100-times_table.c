#include "main.h"

/**
 * print_times_table - prints times table
 *
 * Description: A C program that prints times table
 *
 * @n : num
 *
 * Return: Always 0 (Success)
*/

void print_times_table(int n)
{
	int i = 0;
	int j;
	int k;

	if (n <= 15 && n >= 0)
	{
	while (i <= n)
	{
		j = 1;
		_putchar(48);
		while (j <= n)
		{
			_putchar(',');
			_putchar(' ');
			k = i * j;
			if (k <= 9)
			{
				_putchar(' ');
			}
			if (k <= 99)
			{
				_putchar(' ');
			}
			if (k >= 100)
			{
				_putchar((k / 100) + 48);
				_putchar(((k / 10) % 10) + 48);
			} else if ((k <= 99 && k >= 10))
			{
				_putchar((k / 10) + 48);
			}
			_putchar((k % 10) + 48);
			j++;
		}
		_putchar('\n');
		i++;
	}
	}
}
