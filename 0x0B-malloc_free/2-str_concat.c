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
	int s1_len, s2_len;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	ptr = (char *)malloc(s1_len + s2_len + 1);
	if (ptr)
	{
		strcpy(ptr, s1);
		strcpy(ptr + s1_len, s2);
	}

	return (ptr);
}
