#include "main.h"
#include <stdio.h>

/**
 * _abs - Computes the absolute value
 * @i: integer to be computed
 * Return: Positive i
 */
int _abs(int i)
{
	unsigned int u;

	u = (i >= 0 ? i : -i);

	return (u);
}
