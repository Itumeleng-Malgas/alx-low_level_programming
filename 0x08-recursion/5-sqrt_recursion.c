#include "main.h"

/**
* _sqrt_recursion - computes natural square root of a number
* @n: base
* Return: the root of n
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}

/**
* _sqrt - computes natural square root of a number
* @n: integer to be squared
* @i: possible root
* Return: n squared
*/

int _sqrt(int n, int i)
{
	/* not a natural root */
	if (i * i > n)
		return (-1);

	/* found a the root */
	if (i * i == n)
		return (i);

	return (_sqrt(n, i + 1));
}
