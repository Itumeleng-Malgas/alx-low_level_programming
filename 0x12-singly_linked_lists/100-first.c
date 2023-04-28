#include <stdio.h>

void __attribute__((constructor)) run_before_main(void);

/**
 * run_before_main - prints to stdout before main function run
 */

void run_before_main(void)
{
	printf("You're beat! and yet,you must allow,\n");
	printf("I bore my house upon my back!\n");
}
