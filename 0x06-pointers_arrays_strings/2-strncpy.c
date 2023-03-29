#include "main.h"
#include <string.h>

/**
* _strncpy - copies a string
* @dest: destination string
* @src:  source string
* @n:    number of bytes copied
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;
	int dest_len = strlen(dest);

	if (dest_len < n)
		return (NULL);

	while (n--)
		*ptr++ = *src++;

	return (dest);
}
