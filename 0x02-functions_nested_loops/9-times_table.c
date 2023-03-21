#include "main.h"

/**
 * times_table - Print multiples
 */

void times_table(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		n = 0;
		for (; n < 10; n++)
		{
			int multiple = (i * n);

			if (multiple >= 10)
			{
				int units = multiple % 10;
				int tens  = (multiple / 10) % 10;

				_putchar(tens + '0');
				_putchar(units + '0');
				if (n == 9)
					break;
				_putchar(',');
				_putchar(' ');
				continue;
			}
			_putchar((i * n) + '0');
			if (n == 9)
				break;
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
	_putchar('\n');
}

