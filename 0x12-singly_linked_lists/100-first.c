#include "lists.h"

/**
 * run_before_main - prints to stdout before main function run
 */

void __attribute__((constructor)) run_before_main()
{
	printf("You're beat! and yet,you must allow,\nI bore my house upon my back!\n");
}
