#include "main.c"

/**
* _isupper - checks for uppercase character
* @c: character
* Return: 1 (Success) 0 (Failure)
*/

int _isupper(int c)
{
	int isUpper = 0;

	if (c >= 'A' && c <= 'Z')
		isUpper = 1;

	return (isUpper);
}
