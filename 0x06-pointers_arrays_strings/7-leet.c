#include "main.h"

/**
* leet - encodes a string into 1337
* @str: string to encode
* Return: encoded string
*/

char *leet(char *str)
{
	int i, j;
	char *letters = "aAeEoOtTlL";
	char *codes = "4433007711";
	char *ptr = str;

	for (i = 0; ptr[i] != '\0'; i++)
	{
		j = 0;
		while (j < 10)
		{
			if (ptr[i] == letters[j])
				ptr[i] = codes[j];
			j++;
		}
	}

	return (str);
}
