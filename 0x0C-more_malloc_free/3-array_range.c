#include <stdlib.h>

/**
* *malloc_checked - allocates memory using malloc
* @b : size of memory to be allocated
* Return: Always void (Success)
*/
int *array_range(int min, int max)
{
	int *ptr;
	int size = max - min - 1, i;

	if (min > max)
		return (NULL);

	ptr = malloc(size * sizeof(int));
	if (ptr == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = min++;

	return (ptr);
}
