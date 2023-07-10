#include "main.h"

/**
 * read_textfile -  reads a text file and prints standard output
 * @filename: file to be read
 * @letters: number of bytes to be read
 *
 * Return: number of bytes read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nread, nwritten;
	char *buffer;
	int filde;

	if (!filename)
		return (0);

	filde = open(filename, O_RDONLY);
	if (filde < 0)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (!buffer)
		return (close(filde), 0);

	nread = read(filde, buffer, letters);
	if (nread < 0)
		return (free(buffer), close(filde), 0);

	buffer[nread] = '\0';
	nwritten = write(STDOUT_FILENO, buffer, nread);
	free(buffer);
	close(filde);

	if (nwritten != nread)
		return (0);
	return (nread);
}
