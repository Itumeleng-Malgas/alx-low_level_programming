#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main -entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__ ((unused)))
{
	int (*calc)(int, int);
	int num = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	calc = get_op_func(argv[2]);
	if (calc == NULL && argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	num = calc(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", num);

	exit(EXIT_SUCCESS);
}
