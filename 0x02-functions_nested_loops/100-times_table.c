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

	while (i < (n + 1))
	{
		j = 1;
		_putchar(48);
		while (j < (n + 1))
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			k = i * j;
			if (k < 10)
			{
				_putchar(' ');
			}
			else if (k > 9 && k < 100)
			{
				_putchar((k / 10) + 48);
				_putchar((k % 10) + 48);
			}
			else
			{
				_putchar((k / 100) + 48);
				_putchar(((k %100) / 10) + 48);
				_putchar(((k %100) % 10) + 48);
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
