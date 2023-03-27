#include <stdio.h>
#include "main.h"

int main(void)
{
	int a = 98;
	int b = 42;

	swap_int(&a, &b);
	printf("a:%d\tb:%d\n", a, b);

	return (0);
}
