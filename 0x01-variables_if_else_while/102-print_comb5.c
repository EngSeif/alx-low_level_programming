#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C program that prints two combination of digits
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i = 0;
	int j;

	while (i <= 99)
	{
		j = i;
		while (j <= 99)
		{
		if (j != i)
		{
			putchar((i / 10) + 48);
			putchar((i % 10) + 48);
			putchar(' ');
			putchar((j / 10) + 48);
			putchar((j / 10) + 48);
				if (i + j != 197)
				{
				putchar(',');
				putchar(' ');
				}
		}
		j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
