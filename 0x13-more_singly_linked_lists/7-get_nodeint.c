#include <stdio.h>
#include "lists.h"
#include <stdlib.h>


/**
 * get_nodeint_at_index - Free head and return its data
 * @head: pointer to the listint_t list
 * @index : position of node to be returned
 * Return: the number of nodes printed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c = 0;
	listint_t *current;

	if (head == NULL)
		return (NULL);
	current = head;
	while (current != NULL)
	{
		if (c == index)
		{
			return (current);
		}
		current = head->next;
		c++;
	}
	return (NULL);
}
