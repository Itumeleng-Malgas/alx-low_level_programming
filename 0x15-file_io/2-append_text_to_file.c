#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to append text to
 * @text_content: text to append
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t nwritten;
	int filde;

	if (!filename)
		return (-1);

	if (!text_content)
		return (1);

	filde = open(filename, O_WRONLY | O_APPEND);
	if (filde == -1)
		return (-1);

	nwritten = write(filde, text_content, strlen(text_content));
	close(filde);

	if (nwritten != (ssize_t)strlen(text_content))
		return (-1);
	return (1);
}
