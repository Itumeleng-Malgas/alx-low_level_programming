#include "main.h"

/**
* print_line - draws a straight line
* @n: length of line
*/

void print_line(int c)
{
	for (; c > 0; c--)
		_putchar('_');
	_putchar('\n');
}
