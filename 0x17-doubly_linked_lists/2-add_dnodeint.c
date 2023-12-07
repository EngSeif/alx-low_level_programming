#include "lists.h"

/**
 * add_dnodeint - add new node at beginning
 *
 * @head: pointer to the head
 * @n: value of data of new node
 * Return: head
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->prev = NULL;
	temp->next = *head;

	if (*head != NULL)
		(*head)->prev = temp;
	*head = temp;

	return (temp);
}
