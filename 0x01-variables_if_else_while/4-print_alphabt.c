#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C program that prints alphabet
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if (i != 101 && i != 113)
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
