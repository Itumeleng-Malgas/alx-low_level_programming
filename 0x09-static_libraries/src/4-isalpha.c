#include "main.h"

/**
 * _isalpha - Check for alphabetic character
 * @c: Character to be checked
 * Return: 1 (Success) 0 (Failer)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
