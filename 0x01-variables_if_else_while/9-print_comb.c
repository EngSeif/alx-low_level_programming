#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C program that prints alphabet big and small
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		if (i != 57)
		{
		putchar(',');
		putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
