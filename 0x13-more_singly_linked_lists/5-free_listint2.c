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
	listint_t *current;
	listint_t *temp;

	if (!head)
		return;

	current = *head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}

	*head = NULL;
}
