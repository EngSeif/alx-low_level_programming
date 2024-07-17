#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Search for an element index
 * @list: Array to Be Searched
 * @size: size of array
 * @value: value to be searched for
 *
 * Return: index of value in array if found else -1
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	float jump = sqrt(size);
	listint_t *first, *last;
	size_t m, i;

	if (list == NULL)
		return (NULL);
	m = (int)jump;
	first = list;
	last = list;
	for (i = 0; i < m; i++)
		last = last->next;
	while (!((value >= first->n) && (value <= last->n)) && last->next != NULL)
	{
		printf("Value checked at index [%ld] = [%d]\n", last->index, last->n);
		first = last;
		for (i = 0; i < m; i++)
		{
			if (last->next == NULL)
				break;
			last = last->next;
		}
	}
	printf("Value checked at index [%ld] = [%d]\n", last->index, last->n);
	printf("Value found between indexes [%ld] and [%ld]\n",
		   first->index, last->index);
	while (first != last)
	{
		printf("Value checked at index [%ld] = [%d]\n", first->index, first->n);
		if (first->n == value)
			return (first);
		first = first->next;
	}
	if (first == last)
	{
		printf("Value checked at index [%ld] = [%d]\n", first->index, first->n);
		if (first->n == value)
			return (first);
	}
	return (NULL);
}
