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
	unsigned long f1 = 0, f2 = 1, s;

	for (n = 0; n < 50; n++)
	{
		s = f1 + f2;
		printf("%lu", s);

		f1 = f2;
		f2 = s;

		if (n == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
