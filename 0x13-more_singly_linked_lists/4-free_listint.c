#include <stdio.h>
#include "lists.h"
#include <stdlib.h>


/**
 * listint_len - prints number of elements of a linked list
 * @h: pointer to the listint_t list to print
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
