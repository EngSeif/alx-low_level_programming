#include "lists.h"

/**
 * free_dlistint - free the list
 *
 * @head: pointer to the head
 * Return: head
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
