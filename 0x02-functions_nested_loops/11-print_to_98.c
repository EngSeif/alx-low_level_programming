#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print to 98
 *
 * Description: A C program that prints to 98
 *
 * @n : num
 *
 * Return: Always 0 (Success)
*/

void print_to_98(int n)
{
	if (n < 99)
	{
	while (n < 99)
	{
		if (n != 98)
		{
		printf("%d, ", n);
		}
		else
		{
		printf("%d", n);
		}
		n++;
	}
	printf("\n");
	}
	else
	{
	while (n > 99)
	{
		if (n != 98)
		{
		printf("%d, ", n);
		}
		else
		{
		printf("%d", n);
		}
		n--;
	}
	printf("\n");
	}
}
