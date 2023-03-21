#include <stdio.h>

/**
 * print_to_98 - print to 98
 * @n: a natural number to print from
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d", n);
		if (n != 98)
			printf(", ");
		if (n >= 98)
			n--;
		else
			n++;
	}
}
