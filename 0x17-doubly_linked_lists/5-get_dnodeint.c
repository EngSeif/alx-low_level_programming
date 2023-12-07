#include "lists.h"

/**
 * get_dnodeint_at_index - get the node at certian index
 *
 * @head: pointer to the head
 * @index: index of the certain node
 * Return: head
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c = 0;

	while (c != index && head != NULL)
	{
		head = head->next;
		c++;
	}
	if (head == NULL || c < index)
		return (NULL);
	return (head);
}
