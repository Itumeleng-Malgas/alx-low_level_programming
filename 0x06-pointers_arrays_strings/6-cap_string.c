#include "main.h"
#include <ctype.h>
#include <string.h>

/**
* cap_string - capitalizes all words
* @str: string
* Return: capitalized string
*/

char *cap_string(char *str)
{
	char *ptr = str;
	int capitalize_next = 1;

	while (*ptr != '\0')
	{
		if (capitalize_next && islower(*ptr))
			*ptr = toupper(*ptr);
		capitalize_next = isspace(*ptr) || *ptr == ',' || *ptr == ';' || *ptr == '.'
			|| *ptr == '!' || *ptr == '?' || *ptr == '"' || *ptr == '('
			|| *ptr == ')' || *ptr == '{' || *ptr == '}';
		ptr++;
	}

	return (str);
}
