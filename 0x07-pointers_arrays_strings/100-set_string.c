#include <stdio.h>
#include "main.h"

/**
* set_string - sets the value of a pointer to a char
* @s: dest pointer
* @to: src pointer
*/

void set_string(char **s, char *to)
{
	*s = to;
}
