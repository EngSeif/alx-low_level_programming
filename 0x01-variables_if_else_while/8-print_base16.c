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
	int k = 97;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	while (k <= 102)
	{
		putchar(k);
		k++;
	}

	putchar('\n');
	return (0);
}
