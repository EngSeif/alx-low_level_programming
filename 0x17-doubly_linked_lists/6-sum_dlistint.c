#include "lists.h"

/**
 * sum_dlistint - sum all data of list
 *
 * @head: pointer to the head
 * Return: head
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		temp = head->next;
		sum += head->n;
		head = temp;
	}
	return (sum);
}
