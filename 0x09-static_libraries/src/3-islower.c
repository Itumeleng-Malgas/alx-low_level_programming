#include "main.h"

/**
 * _islower - Check for lowercase character
 * @c: Character to be printed
 * Return: 1 (Success) 0 (Failer)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
