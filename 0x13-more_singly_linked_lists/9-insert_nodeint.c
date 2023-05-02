#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: pointer to first node
 * @idx: postion to iinsert new node
 * @n: data for the new node
 *
 * Return: address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new_node;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	current = *head;
	for (; i < idx && current != NULL; i++)
		current = (*head)->next;

	/* existing node at idx */
	if ((i - 1) == idx)
		return (NULL);

	new_node		= malloc(sizeof(listint_t));
	new_node->n		= n;
	new_node->next	= current->next;

	current->next	= new_node;

	return (new_node);
}
