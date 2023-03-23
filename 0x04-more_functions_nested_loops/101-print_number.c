#include "main.h"
#include <stdio.h>

/**
* _pow - computes the exponent
* @base: base
* @exponent: exponet
* Return: base to the power exponent
*/

int _pow(int base, int exponent)
{
	int i;
	int result;

	result = 1;
	for (i = 0; i < exponent; i++)
	{
		result *= base;
	}
	return (result);
}

/**
* print_number - prints an integer
* @n: iteger to be printed
*/

void print_number(int n)
{
	int num_digits;
	int temp;
	unsigned int pos_n;

	if (n == 0)
	{
		_putchar(0 + '0');
		_putchar('\n');
		return;
	}

	pos_n = n > 0 ? n : -n;
	num_digits = 0;
	temp = pos_n;
	while (temp != 0)
	{
		temp /= 10;
		num_digits++;
	}

	if (n < 0)
		_putchar('-');

	for (; num_digits >= 1; num_digits--)
	{
		_putchar(((pos_n / _pow(10, num_digits - 1)) % 10) + '0');
	}
	_putchar('\n');
}
