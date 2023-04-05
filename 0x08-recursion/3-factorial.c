#include "main.h"

/**
* factorial - computes a factorial of a give integer
* @n: non negative number
* Return: factorial of that number
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
