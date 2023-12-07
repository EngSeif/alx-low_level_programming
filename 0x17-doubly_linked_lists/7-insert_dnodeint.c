#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at a certain index
 *
 * @h: pointer to the head
 * @idx : index value
 * @n : data value
 * Return: head
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *New_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *h;
	dlistint_t *temp2;
	unsigned int c = 0;

	if (New_node == NULL)
		return (NULL);

	New_node->n = n;
	if (idx == 0)
	{
		New_node->prev = NULL;
		New_node->next = *h;
		if (*h != NULL)
			(*h)->prev = New_node;
		*h = New_node;
		return (New_node);
	}
	while (c != idx - 1 && temp != NULL)
	{
		temp = temp->next;
		c++;
	}
	if (temp == NULL)
	{
		free(New_node);
		return NULL;
	}
	temp2 = temp->next;
	temp2->prev = New_node;
	temp->next = New_node;
	New_node->prev = temp;
	New_node->next = temp2;

	return (*h);
}
