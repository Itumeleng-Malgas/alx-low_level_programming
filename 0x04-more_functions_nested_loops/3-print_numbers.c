#include "main.h"

/**
* print_numbers - prints number 0 -9
*/

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar((i % 10) + '0');
	
	_putchar('\n');
}
