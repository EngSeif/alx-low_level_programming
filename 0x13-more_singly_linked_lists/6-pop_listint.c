#include <stdio.h>
#include "lists.h"
#include <stdlib.h>


/**
 * pop_listint - Free head and return its data
 * @head: pointer to the listint_t list
 *
 * Return: the number of nodes printed
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp = *head;

	if (!head)
		return (0);

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (data);
}
