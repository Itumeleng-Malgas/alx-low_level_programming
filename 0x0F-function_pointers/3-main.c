#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main -entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *op = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (strcmp(op, "+") != 0 && strcmp(op, "*") != 0 && strcmp(op, "-") != 0
			&& strcmp(op, "/") != 0 && strcmp(op, "%") != 0)
	{
		printf("Error\n");
		exit(99);
	}

	if (!get_op_func(op))
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(op)(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
