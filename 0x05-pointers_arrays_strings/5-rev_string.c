#include <string.h>

/**
* rev_string - reverse a string by swapping
* @s: string as char[]
*/

void rev_string(char *s)
{
	int i, len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		char temp = s[i];

		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}


