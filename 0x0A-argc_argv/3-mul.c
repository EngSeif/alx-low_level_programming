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
	int sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	return (0);
}
