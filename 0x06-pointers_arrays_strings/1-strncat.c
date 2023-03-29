#include "main.h"

/**
* _strncat - concatenates two strings
* @dest: destination string
* @src:  source string
* @n:    number of bytes
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr)
		++ptr;

	while (n--)
		*ptr++ = *src++;
	*ptr = '\0';

	return (dest);
}
