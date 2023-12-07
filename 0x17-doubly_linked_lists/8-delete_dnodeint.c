#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at a certain index
 *
 * @head: pointer to the head
 * @index : index value
 * Return: head
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *temp2;
	unsigned int c = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	while (c != index - 1)
	{
		if (temp->next)
		{
			temp = temp->next;
			c++;
		}
		else
			return (-1);
	}

	if (temp == NULL)
		return (-1);
	temp2 = temp->next->next;
	free(temp->next);
	temp->next = temp2;
	temp2->prev = temp;

	return (1);
}
