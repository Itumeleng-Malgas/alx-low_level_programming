#include "main.h"
#include <string.h>

/**
* _strncat - concatenates two strings
* @dest: destination string
* @src:  source string
* @n:    number of bytes
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	char *dest_end = dest + strlen(dest);

	while (n-- && *src != '\0')
		*dest_end++ = *src++;

	return (dest);
}
