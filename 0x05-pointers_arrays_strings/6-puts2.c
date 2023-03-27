#include "main.h"

/**
* puts2 - print every other characters of a string
* @str: string
*/

void puts2(char *str)
{
	unsigned long i = 0;

	while (i < strlen(str))
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
