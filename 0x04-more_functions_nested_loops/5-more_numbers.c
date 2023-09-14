#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Description:C program that prints 10 times the numbers, from 0 to 14
 *
 * Return:(Success)
*/
void more_numbers(void)
{
	int i = 0;
	int j = 0;

while (j <= 10)
{
	while (i <= 14)
	{
		if (i < 10)
		{
		_putchar(i);
		}
		else
		{
			_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
		}
		i++;
	}
	_putchar('\n');
	j++;
}
}
