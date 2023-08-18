#include "main.h"

void print_error(const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
}

int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	int fd_to, fd_from = open(file_from, O_RDONLY);
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];
	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to");
		exit(97);
	}
    if (fd_from == -1)
	{
		print_error(strerror(errno));
		exit(98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR |
			S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
	{
		print_error(strerror(errno));
		exit(99);
	}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			print_error(strerror(errno));
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		print_error(strerror(errno));
		exit(98);
	}
	if (close(fd_from) == -1)
	{
		print_error(strerror(errno));
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		print_error(strerror(errno));
		exit(100);
	}
	return (0);
}
