#include "main.h"

/**
 * jack_bauer - prints clock
 *
 * Description: A C program that prints clock
 *
 * Return: Always 0 (Success)
*/

void jack_bauer(void)
{
	int i = 0;
	int j;

	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
			_putchar(':');
			_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
			_putchar('\n');
			j++;
		}
		i++;
	}
}
