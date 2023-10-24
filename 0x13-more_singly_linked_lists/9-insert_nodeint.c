#include <stdio.h>
#include "lists.h"
#include <stdlib.h>


/**
 * insert_nodeint_at_index - sum of data of nodes
 * @head: pointer to the listint_t list
 * @idx : index to the new node to be put
 * @n : value on data in the new node
 * Return: the number of nodes printed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	listint_t *current;

	unsigned int i;

	if (new == NULL || head == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (!idx)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	current = *head;
	while (current)
	{
		if (i == idx - 1)
		{
			new->next = current->next;
			current->next = new;
			return (new);
		}
		i++;
		current = current->next;
	}
	free(new);
	return (NULL);
}
