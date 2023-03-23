#include "main.h"

/**
* print_diagonal - draws a diagonal line
* @n: number of times
*/

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
			break;

		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');

		if (i == n)
			return;
	}
}

