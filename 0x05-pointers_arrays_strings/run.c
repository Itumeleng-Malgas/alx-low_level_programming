#include <stdio.h>
#include "main.h"

int main(void)
{
	int p = 100;

	reset_to_98(&p);
	printf("%d\n", p);

	return (0);
}
