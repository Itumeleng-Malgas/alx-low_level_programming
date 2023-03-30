#include "main.h"
#include <ctype.h>
#include <string.h>

/**
* cap_string - capitalizes all words
* @s: string
* Return: capitalized string
*/

char *cap_string(char *s)
{
	char sep[] = " \t\n,;.!?\"(){}";
	char *word = strtok(s, sep);

	while (word != NULL)
	{
		*word = toupper(*word);
		word = strtok(NULL, sep);
	}

	return (s);
}
