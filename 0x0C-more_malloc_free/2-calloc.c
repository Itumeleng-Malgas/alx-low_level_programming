#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: array members
 * @size: array size
 *
 * Return: pointer to allocated array memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr)
		memset(ptr, 0, size * nmemb);

	return (ptr);
}
