#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element
 * of an array
 *
 * @array: int array
 * @size: size of the array
 * @action: pointer to the function tthat consumes the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action && size > 0)
	{
		while (size--)
			action(*array++);
	}
}
