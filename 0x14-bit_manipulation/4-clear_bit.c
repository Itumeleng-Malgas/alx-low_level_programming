#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number to modify
 * @index: position in n to modify
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1); /* out of bound */

	*n &= ~(1UL << index); /* used & and not 1 to ensure zero is set */
	return (1);
}
