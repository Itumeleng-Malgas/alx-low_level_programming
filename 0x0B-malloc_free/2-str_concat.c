#include <string.h>
#include "main.h"

/**
* str_concat - concatenate two string
* @s1: first string
* @s2: second string
*
* Return: pointer to newly contenated string
*/

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int length;

	if (s1 && !s2)
		ptr = _strcpy(strlen(s1), s1);

	if (s2 && !s1)
		ptr = _strcpy(strlen(s2), s2);

	if (!s1 && !s2)
	{
		ptr = (char *)malloc(1);
		*ptr = '\0';
	}
	else
	{
		length = strlen(s1) + strlen(s2);
		ptr = (char *)malloc(length + 1);

		if (ptr)
		{
			strcpy(ptr, s1);
			strcpy(ptr + strlen(s1), s2);
		}
	}

	return (ptr);
}

/**
* _strcpy - creates sufficient buffer then copies a string to it
* @size: buffer size
* @str: source string
* Return: string at new memory location
*/

char *_strcpy(unsigned int size, char *str)
{
	char *ptr;

	ptr = (char *)malloc(size + 1);
	if (ptr)
		strcpy(ptr, str);
	return (ptr);
}
