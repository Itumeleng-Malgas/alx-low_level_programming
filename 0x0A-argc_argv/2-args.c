#include "main.h"

/**
 * main - entry point
 * @argc: number of command line args
 * @argv: an array of command line args
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
