#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
* main - Entry point
*
* Description: A C program that prints with put function
* @argc : no
* @argv : ele
* * Return: Alawys 0 (Success)
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;


	while (--argc)
	{
		for (c = argc[argv]; *c; c++)
		{
		if ( *c < '0' || *c > '9')
		{
			printf("Error\n");
			return (1);
		}
		}
	sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
