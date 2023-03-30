#include <stdio.h>
#include <string.h>
#include "main.h"

int main(void)
{
	    char s1[] = "Hello";
    char s2[] = "Hell!";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));

	printf("%d ---  %c\n", *(unsigned char *)s1, *s1);
	printf("%d ---  %c\n", *(unsigned char *)s2, *s2);
	return (0);
}
