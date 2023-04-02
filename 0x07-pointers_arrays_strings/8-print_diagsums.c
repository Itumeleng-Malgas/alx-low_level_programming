#include "main.h"

/**
* print_diagsums - Entry point
* @a: input
* @size: input
*/

void print_diagsums(int *a, int size)
{
	int x, y, n;

	x = 0;
	y = 0;

	for (n = 0; n < size; n++)
		x += a[n * size + n];

	for (n = size - 1; n >= 0; n--)
		y += a[n * size + (size - n - 1)];

	printf("%d, %d\n", x, y);
}
