#include "main.h"

/**
 * times_table - prints times table
 *
 * Description: A C program that prints times table
 *
 * Return: Always 0 (Success)
*/

void times_table(void)
{
	int i = 0;
	int j;
	int k;

	while (i < 10)
	{
		j = 1;
		_putchar(48);
		while (j < 10)
		{
			_putchar(',');
			_putchar(' ');
			k = i * j;
			if (k < 10)
			{
				_putchar(' ');
			}
			else
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
