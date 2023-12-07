#include "lists.h"

/**
 * dlistint_len - count number of elements
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
