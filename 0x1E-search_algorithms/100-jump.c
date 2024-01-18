#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array using Jump
 * search algorith
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where the value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump = (size_t)sqrt(size), prev = 0;

	if (array == NULL || size == 0)
		return (-1);

	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev += jump;

		/* If index is beyond array bounds, adjust to last index */
		if (prev >= size)
		{
			prev = size - 1;
			break;
		}
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev - jump, prev);
	for (i = prev; i > prev - jump; --i)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
