#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal number
 */

void print_binary(unsigned long int n)
{
	/* create a mask and set MSB to 1 */
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int zero_flag = 0;

	/* iterate over each bit of n */
	while (mask != 0)
	{
		/* if bit in 'n' with mask match, print 1 and set zero flag */
		if ((n & mask) != 0)
		{
			_putchar('1');
			zero_flag = 1;
		}
	
		else if (zero_flag)
			_putchar('0');

		/* shift mask 1 bit to the right */
		mask = mask >> 1;
	}

	/* if n = 0, print 0 */
	if (!zero_flag)
		_putchar('0');
}
