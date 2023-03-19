#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		int div = i / 10;
		int mod = i % 10;

		if (div == mod || mod == 0)
			continue;
		if (div > mod)
			continue;

		putchar(div + '0');
		putchar(mod + '0');

		if (div == 8 && mod == 9)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
