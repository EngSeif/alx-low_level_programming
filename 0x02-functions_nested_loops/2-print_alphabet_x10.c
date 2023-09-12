#include "main.h"

/**
 * print_alphabet_x10 - use _putchar to print alphabet 10x
 *
 * Description: A C program that prints alphabet 10x
 *
 * Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	int c;
	int i = 0;

	while (i < 10)
	{
	for (c = 'a' ; c <= 'z' ; c++)
		_putchar(c);
	_putchar('\n');
	i++;
	}
}
