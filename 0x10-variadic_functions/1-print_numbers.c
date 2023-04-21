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

	if (!separator)
		return;

	va_start(arg_p, n);
	while (i--)
		printf("%d%s ", va_arg(arg_p, int), separator);
	va_end(arg_p);

	putchar('\n');
}
