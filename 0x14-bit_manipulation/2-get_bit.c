#include "main.h"

/**
 * get_bit - get value of a bit at a given index
 * @n: number to search
 * @index: position to check on n
 *
 * Return: the value at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n & mask) != 0);
}
