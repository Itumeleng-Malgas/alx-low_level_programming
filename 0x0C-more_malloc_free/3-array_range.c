#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: sorted array
 */

int *array_range(int min, int max)
{
	int size, *ptr = NULL;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;
	ptr = malloc(size * sizeof(int));
	if (ptr)
	{
		int i;

		for (i = 0; min <= max; min++, i++)
			ptr[i] = min;
	}

	return (ptr);
}
