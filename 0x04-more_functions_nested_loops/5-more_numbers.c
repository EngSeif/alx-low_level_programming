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
	int i;
	int j = 0;
	int k;

while (j <= 9)
	{
	i = 0;
	while (i <= 14)
	{
		k = i;
		if (i > 9)
		{
			_putchar(1 + 48);
			k = i % 10;
		}
		_putchar(k + 48);
		i++;
	}
	_putchar('\n');
	j++;
	}
}
