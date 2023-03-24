#include "main.h"

/**
* print_number - prints an integer
* @n: iteger to be printed
*/

void print_number(int n)
{
	int i, temp, digit_count = 0;

	if (n == 0)
		_putchar(48);

	/* Haandle negative numbers */
	n = n < 0 ? _putchar(45), -n : n;
	/* Count the number of digits in the integer */
	temp = n;
	while (temp != 0)
	{
		digit_count++;
		temp /= 10;
	}
	/* Print each digit using _putchar */
	while (digit_count != 0)
	{
		int divisor = 1;

		for (i = 1; i < digit_count; i++)
		{
			divisor *= 10;
		}
		_putchar((n / divisor) % 10 + '0');
		digit_count--;
	}
}

