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
	int i, num, sum = 0;

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (argc < 2)
			break;

		if (!num)
		{
			printf("Error\n");
			return (1);
		}

		if (num < 0)
			continue;

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
