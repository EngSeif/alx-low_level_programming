#include "lists.h"

/**
 * print_dlistint - print all elements of the list
 *
 * @h: pointer to the head
 *
 * Return: size
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
