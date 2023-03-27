#include "main.h"

/**
* puts_half - print half of a string
* @str: string
*/

void puts_half(char *str)
{
	unsigned long second_half, length_of_the_string = strlen(str);

	if (length_of_the_string % 2 != 0)
		second_half = (length_of_the_string - 1) / 2;
	else
		second_half = length_of_the_string / 2;

	while (second_half < length_of_the_string)
	{
		_putchar(str[second_half]);
		second_half++;
	}
	_putchar('\n');
}
