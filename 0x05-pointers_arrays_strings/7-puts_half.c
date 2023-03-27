#include "main.h"

/**
* puts_half - print half of a string
* @str: string
*/

void puts_half(char *str)
{
	int halve_length, length_of_the_string = strlen(str);

	if (length_of_the_string % 2 == 0)
		length_of_the_string = (length_of_the_string - 1) / 2;

	halve_length = 
	while (halve_length < length_of_the_string)
	{
		_putchar(str[halve_length]);
		halve_length++;
	}
	_putchar('\n');
}





