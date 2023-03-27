#include "main.h"

/**
* puts_half - print half of a string
* @str: string
*/

void puts_half(char *str)
{
	unsigned long second_halve, length_of_the_string = strlen(str);

	if (length_of_the_string % 2 == 0)
		second_halve = length_of_the_string / 2;
	else
		second_halve = (length_of_the_string - 1) / 2;

	while (second_halve < length_of_the_string)
	{
		_putchar(str[second_halve]);
		second_halve++;
	}
	_putchar('\n');
}
