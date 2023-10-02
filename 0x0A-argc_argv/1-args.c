#include <stdio.h>
#include "main.h"
/**
* main - Entry point
*
* Description: A C program that prints with put function
* @argc : no
* @argv : ele
* * Return: Alawys 0 (Success)
*/

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
