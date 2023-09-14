#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 *
 * Description: A C program that draws a straight line in the terminal.
 *
 * @n : holds line value
 *
 * Return:(Success)
*/
void print_line(int n)
{
	int i

	for (i = 0; i < (n - 1); i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
