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
	char *ptr = NULL;
	int length;

	if (s1 && s2)
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
