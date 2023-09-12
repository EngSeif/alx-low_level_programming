#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C program that prints sum of muiltiplies
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n = 0;
	int s;

	while (n < 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			s = s + n;
		}
	n++;
	}
	printf("The sum of these multiples is : %d\n", s);
	return (0);
}
