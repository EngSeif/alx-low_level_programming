#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		if (current->str != NULL)
		{
			printf("%s\n", current->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		current = current->next;
		count++;
	}
	return (count);
}
