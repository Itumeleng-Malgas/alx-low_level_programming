#include <stdlib.h>
#include "main.h"

/**
 * main - entry point
 * @argc: number of command line args
 * @argv: an array of command line args
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int x, y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	printf("%d\n", x * y);
	return (0);
}
