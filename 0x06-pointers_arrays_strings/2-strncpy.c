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

	while (n && *src)
	{
		*ptr++ = *src++;
		n--;
	}

	while (n)
	{
		*ptr++ = '\0';
		n--;
	}

	return (dest);
}
