#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print strings
 * @separator: separator used when printing
 * @n: number of args
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg_p;
	int i = n;

	va_start(arg_p, n);
	while (i--)
	{
		char *str = va_arg(arg_p, char *);

		str ? printf("%s", str) : printf("(nil)");
		if (i != 0 && separator)
			printf("%s", separator);
	}

	printf("\n");
}
