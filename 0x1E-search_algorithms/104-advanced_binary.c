#include "search_algos.h"

/**
 * print_array - Print An Array
 * @array: Array to Be Printed
 * @left: left index
 * @right: right index
 *
 * Return: None
 */

void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array:");
	for (i = left; i <= right; i++)
	{
		if (i == right)
			printf(" %d\n", array[i]);
		else
			printf(" %d,", array[i]);
	}
}

/**
 * func - Do recursive binary search
 * @array: Array to Be Searched
 * @left: left index
 * @right: right index
 * @value: value to be searched for
 *
 * Return: index of value in array if found else -1
 */

int func(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (left > right)
	{
		return (-1);
	}

	print_array(array, left, right);

	mid = left + (right - left) / 2;

	if (array[mid] == value)
	{
		if (mid == left || array[mid - 1] < value)
			return (mid);
	}

	if (array[mid] >= value)
	{
		return (func(array, left, mid, value));
	}
	else
	{
		return (func(array, mid + 1, right, value));
	}
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
	if (array == NULL || size == 0)
		return (-1);

	return (func(array, 0, size - 1, value));
}
