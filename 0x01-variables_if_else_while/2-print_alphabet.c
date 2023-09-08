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
		printf("%c", i);
		i++;
	}
	printf("\n");
	return (0);
}
