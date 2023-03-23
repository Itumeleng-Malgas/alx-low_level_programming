#include "main.h"

/**
* more_numbers - 10 times the numbers, from 0 to 14
*/

void more_numbers(void)
{
	int i, n = 0;

	while (n++ < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			int units = i              % 10;
			int tens  = ((i + 1) / 10) % 10;

			if (i >= 10)
				_putchar(tens + '0');
			_putchar(units + '0');
		}
		_putchar('\n');
	}
}
