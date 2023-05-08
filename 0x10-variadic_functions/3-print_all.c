#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - print a character
 * @arg: char type param
 */
void print_char(void *arg)
{
	printf("%c", *(char *)arg);
}

/**
 * print_int - print an integer
 * @arg: int type paran
 */
void print_int(void *arg)
{
	printf("%d", *(int *)arg);
}

/**
 * print_float - print a float
 * @arg: float type param
 */
void print_float(void *arg)
{
	printf("%f", *(double *)arg);
}

/**
 * print_string - print a string
 * @arg: char * (string) type param
 */
void print_string(void *arg)
{
	char *str = *(char **)arg;

	if (str == NULL)
		printf("(nil)");
	printf("%s", str);
}

/**
 * print_all - print anything
 * @format: format identifier
 */
void print_all(const char * const format, ...)
{
	va_list args;
	format_t format_map[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
	};

	int format_size = sizeof(format_map) / sizeof(format_map[0]);
	int j, i = 0;

	va_start(args, format);
	while (format[i] != '\0')
	{
		char current_format = format[i];

		j = 0;
		while (j < format_size)
		{
			if (format_map[j].format == current_format)
			{
				void *arg = va_arg(args, void*);

				format_map[j].print_func(&arg);
				if (format[i + 1] != '\0')
					printf(", ");
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
