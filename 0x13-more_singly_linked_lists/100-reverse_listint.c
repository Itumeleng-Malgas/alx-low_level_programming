#include "lists.h"

/**
 * reverse_listint - reverse linked list
 * @head: first node
 *
 * Return:  pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next, *current;

	if (!head)
		return (NULL);

	prev = next = NULL;
	current = *head;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;

		current = next;
	}

	*head = prev;
	return (*head);
}
