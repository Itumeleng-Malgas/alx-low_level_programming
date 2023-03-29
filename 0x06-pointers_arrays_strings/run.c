#include <stdio.h>
#include <string.h>
#include "main.h"

int main(void)
{
	char s1[98];
    char s2[] = "World!";
	
	printf("%s\n", _strncpy(s1,s2, strlen(s2)));
	return (0);
}
