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
	unsigned long f1 = 0, f2 = 1, s, mx = 100000000, f1o = 0, f2o = 0, sumo = 0;

	for (n = 0; n < 98; n++)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		initial0s = numLength(mx) - 1 - numLength(f1);

		while (f1o > 0 && initial0s > 0)
		{
			printf("%d", 0);
			initial0s--;
		}

		printf("%lu", f1);

		s = (f1 + f2) % mx;
		sumo = f1o + f2o + (f1 + f2) / mx;
		f1 = f1;
		f1o = f2o;
		f2 = sum;
		f2o = sumo;

		if (n != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
