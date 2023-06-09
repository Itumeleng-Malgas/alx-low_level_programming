#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation
 * asked by the user
 * @s: operator passed as argument to the program
 * Return: pointer to the  correct function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op && *(ops[i].op) != s[0])
		i++;

	if (ops[i].f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	return (ops[i].f);
}
