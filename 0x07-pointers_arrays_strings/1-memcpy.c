#include "main.h"

/**
* _memcpy - copied memory area
* @dest: destination memory area
* @src: source memory area
* @n: number of bytes from memory area src
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n--)
		*ptr++ = *src++;

	return (dest);
}
