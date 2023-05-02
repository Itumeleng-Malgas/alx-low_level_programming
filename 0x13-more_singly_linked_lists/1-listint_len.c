#include "lists.h"

/**
 * listint_len - sum all the elements of a listint_t list
 * @h: point to head
 *
 * Return: the number of element
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next, count++);
	return (count);
}
