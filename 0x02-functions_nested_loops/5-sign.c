#include "main.h"

/**
 * print_sign - Print sign of a number
 * @n: Number to be checked
 * Return: 1 (Success) 0 (Failer)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(0 + '0');
		return (0);
	}
}
