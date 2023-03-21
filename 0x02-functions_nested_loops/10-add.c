#include "main.h"

/**
 * power - computer the exponent
 * Return: the exponent
 * @base: the base
 * @exponent: the exponent
 */
int power(int base, int exponent)
{
	if (exponent == 0)
	{
		return (1);
	}
	else if (exponent % 2 == 0)
	{
		int result = power(base, exponent / 2);

		return (result * result);
	}
	else
	{
		return (base * power(base, exponent - 1));
	}
}

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

	return (result);
}
