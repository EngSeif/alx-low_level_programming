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
	if (argc == 2)
	{
	int cents[] = {25, 10, 5, 2, 1};
	int money = atoi(argv[1]);
	int least = 0;
	int i;

	for (i = 0; i < 5; i++)
	{
		if (money >= cents[i])
		{
			least += money / cents[i];
			money = money % cents[i];
			if (money % cents[i] == 0)
			{
				break;
			}
		}
	}
		printf("%d\n", least);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
