#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Search for an element index
 * @array: Array to Be Searched
 * @size: size of array
 * @value: value to be searched for
 *
 * Return: index of value in array if found else -1
 */

int jump_search(int *array, size_t size, int value)
{
	float jump = sqrt(size);
	size_t m, first, last, i;

	if (array == NULL)
		return (-1);

	m = (int)jump;
	first = 0;
	last = first + m;

	while (!(value >= array[first] && value <= array[last]))
	{
		printf("Value checked array[%ld] = [%d]\n", first, array[first]);
		first = first + m;
		last = last + m;

		if (last > size - 1)
			break;
	}
	printf("Value checked array[%ld] = [%d]\n", first, array[first]);
	printf("Value found between indexes [%ld] and [%ld]\n", first, last);

	for (i = first; i <= last; i++)
	{
		if (i > size - 1)
			break;
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
