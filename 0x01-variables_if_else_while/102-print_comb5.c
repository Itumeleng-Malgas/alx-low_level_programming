#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int i, n;

	for (i = 0; i <= 98; i++)
	{
		int unit = i       % 10;
		int tens = i / 10  % 10;

		for (n = i;; n++)
		{
			int unit_n = n       % 10;
			int tens_n = n / 10  % 10;

			if (unit == unit_n && tens == tens_n)
				continue;
			putchar(tens + '0');
			putchar(unit + '0');
			putchar(' ');
			putchar(tens_n + '0');
			putchar(unit_n + '0');
			if (i == 98 && n == 99)
				break;

			putchar(',');
			putchar(' ');

			if (n == 99)
				break;
		}
	}
	putchar('\n');

	return (0);
}


