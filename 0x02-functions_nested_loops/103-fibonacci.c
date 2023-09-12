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
	unsigned long f1 = 0, f2 = 1, s;
	float ts = 0;

	while (1)
	{
		s = f1 + f2;
		if (s > 4000000)
			break;

		if (s % 2 == 0)
			ts = ts + s;

		f1 = f2;
		f2 = s;
	}
	printf("%.0f\n", ts);
	return (0);
}
