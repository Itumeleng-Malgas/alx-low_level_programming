#include "main.h"

/**
* _strpbrk - searches a string for any of a set of bytes
* @s: original string
* @accept: accepted char
* Return: pointer to first occurance of accept in s
*/

char *_strpbrk(char *s, char *accept)
{
	char *ptr = accept;

	while (*s)
	{
		while (*ptr)
		{
			if (*s == *ptr)
				return (s);
			ptr++;
		}
		ptr = accept;
		s++;
	}

	return ('\0');
}
