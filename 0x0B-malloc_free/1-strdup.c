#include <string.h>
#include "main.h"

/**
* _strdup -  returns a pointer to a newly allocated space in memory, which
* contains a copy of the string given as a parameter.
*
* @str: string
* Return: pointer to string
*/

char *_strdup(char *str)
{
	char *ptr = NULL;

	if (str && strlen(str) > 0)
	{
		ptr = (char *)malloc(sizeof(str));
		if (ptr)
			strcpy(ptr, str);
	}

	return (ptr);
}
