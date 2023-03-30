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
	int i = 0;

	while (i++ < n && *src != '\0')
		*ptr++ = *src++;

	while (i++ < n)
		*ptr++ = '\0';

	return (dest);
}
