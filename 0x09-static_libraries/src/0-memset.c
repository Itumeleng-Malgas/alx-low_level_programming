#include "main.h"

/**
* _memset - fills memory with a constant byte
* @s: memory area to be filled
* @b: constant byte
* @n: number of bytes - pointed to by s
* Return: original char *s, with filled bytes
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*ptr++ = b;

	return (s);
}

