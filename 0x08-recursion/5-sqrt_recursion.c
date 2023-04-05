#include "main.h"

/**
* square_root - computes natural square root of a number
* @n: integer to be squared
* @start: int
* @end: int
* Return: n squared
*/

int square_root(int n, int start, int end)
{
	int mid = (start + end) / 2;

	if (start > end)
	{
		return (end);
	}
	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid < n)
	{
		return (square_root(n, mid + 1, end));
	}
	else
	{
		return (square_root(n, start, mid - 1));
	}
}

/**
* _sqrt_recursion - computes natural square root of a number
* @n: integer to be squared
* Return: n squared
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		/* if n is negative, return -1 */
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		/* if n is 0 or 1, return n */
		return (n);
	}
	else
	{
		/* recursively calculate the square root of n */
		return (square_root(n, 1, n));
	}
}
