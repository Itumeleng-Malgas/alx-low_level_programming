#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: list head
 * @str: string param to create new node
 *
 * Return: address of the new elemen (success) | NULL (failure)
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	
	new->str 	= strdup(str);
	new->len 	= strlen(str);
	new->next	= (*head);
	(*head) 	= new;

	return (new);
}
