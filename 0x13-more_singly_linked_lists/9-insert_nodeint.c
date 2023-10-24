#include <stdio.h>
#include "lists.h"
#include <stdlib.h>


/**
 * sum_listint - sum of data of nodes
 * @head: pointer to the listint_t list
 * Return: the number of nodes printed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	listint_t *current;

	unsigned int i;

	current = *head;
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	
	for(i = 0; i < idx - 1; i++)
	{
		current = current->next;
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
