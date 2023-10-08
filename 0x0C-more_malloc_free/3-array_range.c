#include <stdlib.h>
#include "main.h"
/**
* *array_range - creates an array of integers
* @max : max value
* @min : min value
* Return: ptr
*/
int *array_range(int min, int max)
{
	int *ptr;
	int size, i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(size * sizeof(int));
	if (ptr == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = min++;

	return (ptr);
}
