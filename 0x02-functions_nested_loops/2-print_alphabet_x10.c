#include "main.h"

/**
 * print_alphabet_x10 - Print all lowercase alphabets x10
 */
void print_alphabet_x10(void)
{
	char c;
	int n;

	for (n = 1; n <= 10; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);

		_putchar('\n');
	}
}
