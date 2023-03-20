#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 1000; i++)
	{
		int unit = i       % 10;
		int tens = i / 10  % 10;
		int hund = i / 100 % 10;

		if (unit > tens && tens > hund)
		{
			putchar(hund + '0');
			putchar(tens + '0');
			putchar(unit + '0');

			if (hund == 7 && tens == 8 && unit == 9)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}


