#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: file to read/create
 * @text_content: file content
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	mode_t mode = S_IRUSR | S_IWUSR;
	ssize_t nwritten = 0;
	int filde;

	if (!filename)
		return (-1);

	filde = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (filde < 0)
		return (-1);

	if (text_content)
	{
		size_t length = strlen(text_content);

		nwritten = write(filde, text_content, length);
	}

	close(filde);
	if (nwritten < 0)
		return (-1);
	return (1);
}
