#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints fizz buzz
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i == 100)
		{
			printf("Buzz");
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
		i++;
	}
	printf("\n");
	return (0);
}
