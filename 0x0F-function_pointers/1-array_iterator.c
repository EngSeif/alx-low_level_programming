#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function
 * @array: input array
 * @size : size of the array
 * @action : pointer to the function
 * Return: Nothing.
 */
void array_iterator(int *array, int size, void (*action)(int))
{
	int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
