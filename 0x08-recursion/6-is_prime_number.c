#include "main.h"

/**
* _sqrt - finds the square root of a number
* @n: non negative integer
* Return: square of n
*/

int _sqrt(int n, int i)
{
	for (; i * i <= n; i++)
	{
	}
	return (i - 1);
}

/**
* is_prime_number - finds the prime number
* @n: number > 2
* Return: 1 success, 0 failure
*/

int is_prime_number(int n)
{
	static int div = 2;

	if (n <= 0)
		return (0);

	if (div > _sqrt(n, 1))
		return (1);

	if (n % div == 0)
		return (0);

	div++;
	return (is_prime_number(n));
}
