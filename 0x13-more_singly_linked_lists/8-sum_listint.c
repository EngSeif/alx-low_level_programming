#include <stdio.h>
#include "lists.h"
#include <stdlib.h>


/**
 * sum_listint - sum of data of nodes
 * @head: pointer to the listint_t list
 * Return: the number of nodes printed
 */

int sum_listint(listint_t *head)
{
	int c = 0;
	listint_t *current;

	if (head == NULL)
		return (0);
	current = head;
	while (current != NULL)
	{
		c = c + current->n;
		current = current->next;
	}
	return (c);
}
