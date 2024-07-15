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
 * binary_search - Search for an element index
 * @array: Array to Be Searched
 * @size: size of array
 * @value: value to be searched for
 *
 * Return: index of value in array if found else -1
 */

int binary_search(int *array, size_t size, int value)
{
	int mid;
	int first = 0;
	int last = size - 1;

	if (array == NULL)
		return (-1);

	while (!(first > last))
	{
		print_array(array, first, last);
		mid = (first + last) / 2;
		if (array[mid] == value)
			return (mid);
		else if (value > mid)
			first = mid + 1;
		else
			last = mid - 1;
	}

	return (-1);
}
