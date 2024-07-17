#include "search_algos.h"

/**
 * interpolation_search - Search for an element index
 * @array: Array to Be Searched
 * @size: size of array
 * @value: value to be searched for
 *
 * Return: index of value in array if found else -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos;
	size_t low, high;
	double ratio;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;
	ratio = (double)(high - low) / (array[high] - array[low]);
	pos = low + (ratio * (value - array[low]));
	if (pos > size - 1)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}
	while (!(pos < low || pos > high))
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
		ratio = (double)(high - low) / (array[high] - array[low]);
		pos = low + (ratio * (value - array[low]));
	}
	return (-1);
}
