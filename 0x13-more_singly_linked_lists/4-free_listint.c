#include "lists.h"

/**
 * free_listint -  frees a listint_t list
 * @head: poiner to the first node
 */

void free_listint(listint_t *head)
{
	listint_t *temp, *current = head;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}


