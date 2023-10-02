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
	int i, sum;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] < '0' || *argv[i] > '9')
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
