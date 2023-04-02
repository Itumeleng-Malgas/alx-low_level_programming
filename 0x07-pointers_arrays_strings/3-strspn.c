#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: initial string
* @accept: s substring
* Return: number of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;

	while (*s++)
	{
		if (*s == *accept++)
			n += 1;
	}

	return (n);
}
