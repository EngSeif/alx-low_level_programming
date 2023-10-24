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
 * delete_nodeint_at_index - delete node
 * @head: pointer to the listint_t list
 * @index : index to the new node to be put
 * Return: the number of nodes printed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp, *node;

	tmp = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (i = 0; i < index - 1 && tmp != NULL && index != 0; i++)
		tmp = tmp->next;
	if (tmp == NULL)
		return (-1);
	if (index == 0)
	{
		node = tmp->next;
		free(tmp);
		*head = node;
	}
	else
	{
		if (tmp->next == NULL)
			node = tmp->next;
		else
			node = tmp->next->next;
		free(tmp);
		tmp->next = node;
	}
	return (1);
}
