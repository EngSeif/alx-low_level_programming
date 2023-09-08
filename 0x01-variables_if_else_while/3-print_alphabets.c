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
	int i = 97;
	int k = 65;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	while (k <= 90)
	{
		putchar(k);
		k++;
	}

	putchar('\n');
	return (0);
}
