#include <string.h>
#include "main.h"

/**
* print_rev - print string in reverse
* @s: string
*/

void print_rev(char *s)
{
	unsigned long len, i;

	len = strlen(s);
	for (i = 0; i < len; i++)
		_putchar(s[len - i - 1]);

	_putchar('\n');
}
