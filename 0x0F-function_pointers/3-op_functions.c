#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - adds 2 numbers
 * @a: first number
 * @b: second number
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract give number
 * @a: first number
 * @b: second number
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a / b);
}

/**
 * op_mul - multiplies 2 numbers
 * @a: first number
 * @b: second number
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides 2 numbers
 * @a: first number
 * @b: second number
 * Return: qoutient
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - computes modulus
 * @a: first number
 * @b: second number
 * Return: remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
