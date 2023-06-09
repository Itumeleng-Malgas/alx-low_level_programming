#include "main.h"

/**
* _strchr - locates a character in a string
* @s: the string being searched
* @c: character we search for
* Return: pointer to the first occurrence of c
*/

char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
			return (s);
	}

	return ('\0');
}
