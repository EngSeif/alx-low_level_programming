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
	int k;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			if (i != j && i < j)
			{
			k = 0;
			while (k <= 9)
			{
				if (j != k && j < k)
				{
				putchar(i + 48);
				putchar(j + 48);
				putchar(k + 48);
					if (i + j + k != 24)
					{
					putchar(',');
					putchar(' ');
					}
				}
				k++;
			}
		}
		j++;
	}
	i++;
	}
	putchar('\n');
	return (0);
}
