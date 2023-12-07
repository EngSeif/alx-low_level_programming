#include "lists.h"

/**
 * add_dnodeint_end - add new node at end
 *
 * @head: pointer to the head
 * @n: value of data of new node
 * Return: head
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *temp2 = malloc(sizeof(dlistint_t));

	if (temp2 == NULL)
		return (NULL);

	temp2->n = n;
	temp2->next = NULL;

	if (*head == NULL)
	{
		temp2->prev = NULL;
		*head = temp2;
		return (*head);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp2->prev = temp;
	temp->next = temp2;

	return (*head);
}
