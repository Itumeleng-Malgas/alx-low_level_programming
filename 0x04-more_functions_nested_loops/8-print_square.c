#include "main.h"

/**
* print_square - print square
* @size: size of the square
*/

void print_square(int size)
{
	int x, y;

	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
			_putchar('#');
		_putchar('\n');
	}
}
