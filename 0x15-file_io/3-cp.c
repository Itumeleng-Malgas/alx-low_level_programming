#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * error_out - print the error message and exit
 * @code: exit code
 * @format: formatted string
 * @arg: arguments for the formatted string
 */

void error_out(int code, const char *format, const char *arg)
{
	dprintf(STDERR_FILENO, format, arg);
	exit(code);
}

/**
 * main - entry point
 * @argc: arg count
 * @argv: arg vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t nread, nwritten;
	char *buffer;
	char from_str[10], to_str[10];

	if (argc != 3)
		error_out(97, "Usage: %s file_from file_to\n", argv[0]);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_out(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_CREAT | O_EXCL | O_WRONLY | O_TRUNC, 0666);
	if (fd_to == -1)
		error_out(99, "Error: Can't write to %s\n", argv[2]);
	buffer = malloc(BUFFER_SIZE);
	if (!buffer)
		exit(EXIT_FAILURE);
	while ((nread = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		nwritten = write(fd_to, buffer, nread);
		if (nwritten != nread)
		{
			free(buffer);
			error_out(99, "Error: Can't write to %s\n", argv[2]);
		}
	}
	if (nread == -1)
		error_out(98, "Error: Can't read from file %s\n", argv[1]);
	sprintf(from_str, "%d", fd_from);
	if (close(fd_from) == -1)
		error_out(100, "Error: Can't close fd %s\n", from_str);
	sprintf(to_str, "%d", fd_to);
	if (close(fd_to) == -1)
		error_out(100, "Error: Can't close fd %s\n", to_str);
	return (0);
}
