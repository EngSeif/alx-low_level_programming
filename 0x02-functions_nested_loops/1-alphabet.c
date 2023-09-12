#include "main.h"

/**
 * print_alphabet - use _putchar to print alphabet
 *
 * Description: A C program that prints alphabet
 *
 * Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	int c;

	for (c = 'a' ; c <= 'z' ; c++)
		_putchar(c);
	_putchar('\n');
}
