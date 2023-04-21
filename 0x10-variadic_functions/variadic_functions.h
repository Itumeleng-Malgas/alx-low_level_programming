#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct format_mapping - defines format_t type
 * @format: identifier
 * @print_func: function that match identifier
 */

typedef struct format_mapping
{
	char format;
	void (*print_func)(void *);
} format_t;

/* print_all helper functions */ 
void print_char(void* arg);
void print_int(void* arg);
void print_float(void* arg);
void print_string(void* arg);

void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
