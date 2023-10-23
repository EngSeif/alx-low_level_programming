#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add a new node at beginning of a list_t list.
 * @head : Head of The linked list
 * @n : value to be inserted at the beginning
 *
 * Return: Linked List
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(struct listint_s));
	if (add == NULL)
		return (NULL);
	add->n = n;
	add->next = *head;
	*head = add;
	return (add);
}
