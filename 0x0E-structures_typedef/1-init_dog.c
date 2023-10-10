#include "dog.h"
/**
 * init_dog - use _putchar to print alphabet
 * @d : st
 * @name : nm
 * @age : ag
 * @owner : own
 * Description: A C program that prints alphabet
 *
 * Return: Always 0 (Success)
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
