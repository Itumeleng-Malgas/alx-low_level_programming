#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: initial string
* @accept: s substring
* Return: number of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	/* start n @ 1 for null terminator */
	unsigned int n = 1;
	char *ptr = s;

	while (*accept)
	{
		while (*ptr)
		{
			if (*ptr == *accept)
			{
				n++;
				break;
			}
			ptr++;
		}

		ptr = s;
		accept++;
	}

	return (n);
}
