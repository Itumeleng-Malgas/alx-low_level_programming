#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: s1, followed by the first n bytes of s2, and null terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len, s2_len;
	char *ptr = NULL;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
		n = s2_len;

	ptr = malloc(s1_len + n + 1);
	if (ptr)
	{
		memcpy(ptr, s1, s1_len);
		memcpy(ptr + s1_len, s2, n);
		ptr[s1_len + n] = '\0';
	}

	return (ptr);
}
