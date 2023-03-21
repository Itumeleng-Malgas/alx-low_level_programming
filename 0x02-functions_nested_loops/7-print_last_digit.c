#include "main.h"

/**
 * print_last_digit - Prints the last digit of any number
 * @i: integer value to be searched
 * Return: The value of that last digit
 */
int print_last_digit(int i)
{
	unsigned int u, units;

	/* Converting to positive value */
	u = (i >= 0 ? i : -i);
	units = u % 10;

	_putchar(units + '0');
	return (units);
}
