#include "main.h"

/**
* _strcpy - copies src string to dest
* @dest: destination string
* @src: source string
* Return: pointer dest string
*/

char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
		*p++ = *src++;
	*p = '\0';

	return (dest);
}

