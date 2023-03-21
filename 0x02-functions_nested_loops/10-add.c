#include "main.h"
#include <stdio.h>

/**
 * add - adds two numbers
 * Return: The sum
 * @a: first value
 * @b: second value
 */
int add(int a, int b)
{
	int result, num_digits, temp, i;

	result = a + b;
	num_digits = 0;
	temp = result;

	/* Count the number of digits in the result */
	while (temp != 0)
	{
		temp /= 10;
		num_digits++;
	}

	/* Convert to string and display */
	char str[num_digits];
	sprintf(str, "%d", result);

	for (i = 0; i < num_digits; i++)
	{
		_putchar(str[i]);
	}
}
