#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - Entry point
* Return: 0 (success)
*/

int main(void)
{
	int n, r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	r = abs(n) % 10;

	if (r == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	else if (r > 0 && r <= 5)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, r);
	else
		printf("Last digit of %d is %d and is greater than 5\n", n, r);

	return (0);
}
