#include <ctype.h>
#include "main.h"

/**
* string_toupper -  changes all lowercase letters to uppercase
* @str: string
* * Return: uppercase string
*/

char *string_toupper(char *str)
{
	char *s = str;

	while (*s++)
		*s = toupper(*s);

	return (str);
}
