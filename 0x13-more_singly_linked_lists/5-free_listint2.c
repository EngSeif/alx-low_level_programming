#include <stdio.h>
#include "lists.h"
#include <stdlib.h>


/**
 * free_listint2 - Free all of list memory
 * @head: pointer to the listint_t list
 *
 * Return: the number of nodes printed
 */

void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	if (!head)
		return;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
