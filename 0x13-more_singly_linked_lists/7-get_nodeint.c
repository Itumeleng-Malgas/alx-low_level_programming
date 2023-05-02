#include "lists.h"

/**
 * get_nodeint_at_index - get nth node of a listint_t linked list
 * @head: pointer to first node
 * @index: index of the node to be retrieved
 *
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	for (; current != NULL && i < index; i++)
		current = current->next;

	return (current);
}
