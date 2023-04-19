#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name <string>
 * @f: func that prints name
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
