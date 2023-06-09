#include "main.h"
#include <stdio.h>

/**
* _strcat - concatenates two strings
* @dest: distination string
* @src:  source string
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	/* traverse _dest until null */
	while (*ptr)
		ptr++;

	/* copy src into _dest from null */
	while (*src)
		*ptr++ = *src++;
	*ptr = '\0';

	return (dest);
}
