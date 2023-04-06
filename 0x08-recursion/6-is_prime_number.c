#include "main.h"

/**
 * is_prime - Checks for prime number.
 * @n: The number to checks.
 * @divisor: The divisor being tested.
 *
 * Return: 1 number is prime, 0 otherwise.
 */
int is_prime(int n, int divisor)
{
	/* Base cases */
	if (n < 2)
	{
		return (0);
	}
	if (n == 2 || n == 3)
	{
		return (1);
	}
	if (n % 2 == 0 || n % divisor == 0)
	{
		return (0);
	}
	if (divisor * divisor > n)
	{
		return (1);
	}

	/* Recursive case */
	return (check_prime(n, divisor + 2));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to checks.
 *
 * Return: 1 number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (check_prime(n, 3));
}
