#include "main.h"

/**
* _atoi - takes a pointer to a character string and returns an integer
* @s: string pointer
* Return: integer value
*/

int _atoi(char *s)
{
	int num = 0;
	int sign = 1;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
		}
		else
		{
			break;
		}
		i++;
	}
	return (num * sign);
}

