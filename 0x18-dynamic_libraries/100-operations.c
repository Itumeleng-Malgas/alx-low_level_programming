#include "100-operations.h"

/**
 * add - add two numbers
 * @a: first number
 * @b: second number
 * Return: sum a&b
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtract two numbers
 * @a: first number
 * @b: second number
 * Return: difference a&b
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies two numbers
 * @a: first number
 * @b: second number
 * Return: product a&b
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divides two numbers
 * @a: first number
 * @b: second number
 * Return: quotient a&b
 */

int div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		printf("Error: Division by zero!\n");
		return (0);
	}
}

/**
 * mod - modulas two numbers
 * @a: first number
 * @b: second number
 * Return: remainder a%b
 */

int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		printf("Error: Modulo by zero!\n");
		return (0);
	}
}
