#include "main.h"
#include <string.h>

/**
* _strstr - locates a substring
* @haystack: the containing string
* @needle: string being searched
* Return: the pointer to the substring
*/

char *_strstr(char *haystack, char *needle)
{
	char *ptr = needle;
	char *hay;

	while (*haystack)
	{
		if (*haystack == *ptr)
		{
			hay = haystack;
			while (*ptr)
				if (*ptr++ != *hay++)
					continue;
			return (haystack);
		}
		ptr = needle;
		haystack++;
	}

	return ('\0');
}
