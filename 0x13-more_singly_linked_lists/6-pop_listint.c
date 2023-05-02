#include "lists.h"

/**
 * pop_listint - pops the head node
 * @head: pointer to first node
 *
 * Return: head node data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data = 0;

	if (head != NULL)
	{
		if (*head == NULL)
			return (data);

		data = (*head)->n;
		temp = *head;

		*head = (*head)->next;
		free(temp);
	}

	return (data);
}
