#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * create_new_node - create a new node
 * @n : value on data in the new node
 * Return: the number of nodes printed
 */
listint_t *create_new_node(int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	return (new);
}
/**
 * insert_nodeint_at_index - sum of data of nodes
 * @head: pointer to the listint_t list
 * @idx : index to the new node to be put
 * @n : value on data in the new node
 * Return: the number of nodes printed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmp, *tmp_old, *new;

	tmp = *head;
	if (head == NULL)
		return (NULL);
	new = create_new_node(n);

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	if (idx == 0)
		*head = new;
	for (i = 0; i < idx - 1 && tmp && idx != 0; i++)
	{
		tmp = tmp->next;
	}
	if (tmp == NULL)
		return (NULL);
	if (idx == 0)
		new->next = tmp;
	else
	{
		tmp_old = tmp->next;
		tmp->next = new;
		new->next = tmp_old;
	}
	return (new);
}
