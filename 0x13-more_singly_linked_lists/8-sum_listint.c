#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 * @head: pointer to first head
 *
 * Return: sum of all data
 */

int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	for (; current != NULL; current = current->next)
		sum += current->n;

	return (sum);
}
