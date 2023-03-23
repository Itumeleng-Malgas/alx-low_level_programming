#include "main.h"

/**
* print_most_numbers - prints numbers 0-9 and !2 & !4
*/

void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num != 2 && num != 4)
			_putchar(num + '0');
	}
}
