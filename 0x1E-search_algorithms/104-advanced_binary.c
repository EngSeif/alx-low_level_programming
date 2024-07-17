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
 * func - Do recursive binary search
 * @array: Array to Be Searched
 * @first: first index
 * @last: last index
 * @value: value to be searched for
 *
 * Return: index of value in array if found else -1
 */

int func(int *array, size_t first, size_t last, int value)
{
	size_t mid;

	if (!(first > last))
	{
		print_array(array, first, last);
		mid = (first + last) / 2;
		if (array[mid] == value && (last - first == 1))
			return (mid);
		else if (value > array[mid])
		{
			first = mid + 1;
			return (func(array, first, last, value));
		}
		else
		{
			if (array[mid] == value)
			{
				last = mid;
				return (func(array, first, last, value));
			}
			else
			{
				last = mid - 1;
				return (func(array, first, last, value));
			}
			last = mid - 1;
			return (func(array, first, last, value));
		}
	}
	return (-1);
}

/**
 * advanced_binary - Search for an element index
 * @array: Array to Be Searched
 * @size: size of array
 * @value: value to be searched for
 *
 * Return: index of value in array if found else -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (func(array, 0, size - 1, value));
}
