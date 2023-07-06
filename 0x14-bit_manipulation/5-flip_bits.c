#include "main.h"

/**
 * flip_bits - number of bits you would need to flip to
 * get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int df = n ^ m;
	unsigned int count = 0;

	while (df)
	{
		count += df & 1;
		df >>= 1;
	}

	return (count);
}
