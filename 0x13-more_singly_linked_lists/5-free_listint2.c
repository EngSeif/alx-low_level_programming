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
	if (*head == NULL)
	{
		return;
	}

	free_listint2(&((*head)->next));
	free(*head);
	*head = NULL;
}
