#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to head
 * @index: node position to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (!head || *head == NULL)
	{
		return (-1);
	}

	/* deleting the head node */
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	for (i = 0; current != NULL && i < index - 1; i++)
		current = current->next;

	/* Check if the index is out of range */
	if (current == NULL || current->next == NULL)
		return (-1);

	/* Delete the node at the given index */
	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
