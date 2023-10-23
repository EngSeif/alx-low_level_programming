#include <stdio.h>
#include "lists.h"
#include <stdlib.h>


/**
 * free_listint - Free all of list memory
 * @head: pointer to the listint_t list
 *
 * Return: the number of nodes printed
 */

void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		if (head->n)
		{
			free(head);
		}
	}
}
