#include "main.h"

/**
* _strpbrk - searches a string for any of a set of bytes
* @s: original string
* @accept: accepted char
* Return: pointer to first occurance of accept in s
*/

char *_strpbrk(char *s, char *accept)
{
	char *ptr = s;

	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
				return (s);
			accept++;
		}
		s++;
	}

	return ('\0');
}
