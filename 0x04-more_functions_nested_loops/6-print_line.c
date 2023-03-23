#include "main.h"

/**
* print_line - draws a straight line
* @n: length of line
*/

void print_line(int n)
{
	for (; n > 0; n--)
		_putchar('_');
	_putchar('\n');
}
