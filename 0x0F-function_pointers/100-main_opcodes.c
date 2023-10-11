#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc : no of arguments
 * @argv : arguments in array
 * Description: our main fun
 * Return: according to input
*/
int main(int argc, char **argv)
{
	char *p = (char *)main;
	int b;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (b--)
		printf("%02hhx%s", *p++, b ? " " : "\n");
	return (0);
}
