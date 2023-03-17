#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
 int main(void)
{
	int i, n;

	for (i = 0; i <= 9; i++)
	{
		for (n = i + 1; n <= 9; n++)
		{
			if (i != n)
			{
				putchar(i + '0');
				putchar(n + '0');

				if (i == 8 && n == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
