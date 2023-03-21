#include <unistd.h>

/**
 * _putchar - prints a single character to file descriptor 1 (stdout)
 * @c: characters to be printed
 */
void _putchar(char c)
{
	write(1, &c, sizeof(c));
}
