#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer.
 * @array: input array
 * @size : size of the array
 * @cmp : pointer to the function
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
