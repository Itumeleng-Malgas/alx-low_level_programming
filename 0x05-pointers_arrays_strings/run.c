#include <stdio.h>
#include "main.h"

int main(void)
{
	int a = 100;
	int b = 2;

	swap_int(&a, &b);
	printf("a:%d\tb:%d\n", a, b);

	return (0);
}
