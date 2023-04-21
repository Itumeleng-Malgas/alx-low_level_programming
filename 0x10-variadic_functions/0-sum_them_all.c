#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters
 * @n: number of args
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int i = n, sum = 0;
	va_list ap;

	va_start(ap, n);
	while (i--)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
