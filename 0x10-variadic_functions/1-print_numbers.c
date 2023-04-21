#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: separator, printed between numbers
 * @n: number of args
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg_p;
	int i = n;

	va_start(arg_p, n);
	while (i--)
	{
		printf("%d", va_arg(arg_p, int));
		if (i != 0 && separator)
			printf("%s", separator);
	}
	va_end(arg_p);

	printf("\n");
}
