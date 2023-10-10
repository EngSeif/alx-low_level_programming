#include "dog.h"
#include <stdio.h>
/**
 * print_dog - use _putchar to print alphabet
 *
 * Description: A C program that prints alphabet
 * @d : pointer to struct
 * Return: Always 0 (Success)
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
