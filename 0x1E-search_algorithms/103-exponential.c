#include "search_algos.h"

/**
 * print_array - Print An Array
 * @array: Array to Be Printed
 * @first: first index
 * @last: last index
 *
 * Return: None
 */

void print_array(int *array, size_t first, size_t last)
{
	size_t i;

	printf("Searching in array:");
	for (i = first; i <= last; i++)
	{
		if (i == last)
			printf(" %d\n", array[i]);
		else
			printf(" %d,", array[i]);
	}
}

/**
 * exponential_search - Search for an element index
 * @array: Array to Be Searched
 * @size: size of array
 * @value: value to be searched for
 *
 * Return: index of value in array if found else -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i, first, last, mid;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	i = 1;
	while (i < size && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = i * 2;
	}

	first = i / 2;
	if (i < (size - 1))
		last = i;
	else
		last = size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", first, last);

	while (!(first > last))
	{
		print_array(array, first, last);
		mid = (first + last) / 2;
		if (array[mid] == value)
			return (mid);
		else if (value > array[mid])
			first = mid + 1;
		else
			last = mid - 1;
	}

	return (-1);
}
