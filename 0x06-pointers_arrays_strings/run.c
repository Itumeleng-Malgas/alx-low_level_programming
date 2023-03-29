#include <stdio.h>
#include "main.h"

int main(void)
{
	char s1[98] = "Hello ";
    char s2[] = "World!\n";
	
	printf("%s\n", _strcat(s1,s2));
	return (0);
}
