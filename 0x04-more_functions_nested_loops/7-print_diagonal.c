#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * Description: A C program that draws a diagonal line on the terminal.
 *
 * @n : holds line value
 *
 * Return:(Success)
*/
void print_diagonal(int n)
{
	int i;
	int s;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (s = 1; s <= i; s++)
			{
				if (s == i)
				_putchar('\\');
				else if (s < i)
				_putchar(' ');
			}
				_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
