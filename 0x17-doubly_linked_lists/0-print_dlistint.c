#include "lists.h"

/**
 * print_dlistint - print all elements of the list
 *
 * @h: pointer to the head
 *
 * Return: size
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
