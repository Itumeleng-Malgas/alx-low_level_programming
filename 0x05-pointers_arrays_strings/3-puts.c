#include <string.h>
#include "main.h"

/**
* _puts - prints a string
* @str: string value
*/

void _puts(char *str)
{
	long unsigned int len = 0;

	while(len < strlen(str))
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}

