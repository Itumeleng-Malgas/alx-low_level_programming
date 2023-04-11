#include <string.h>
#include "main.h"

/**
* create_array - creates an array of chars, and initializes it with a
* specific char
* @size: size of the array
* @c: char to populate the array
*
* Return: Pointer to c array
*/

char *create_array(unsigned int size, char c)
{
	char *char_array = (char *)malloc(size);

	if (char_array && c && size)
	{
		memset(char_array, c, size);
		return (char_array);
	}

	return (NULL);
}

