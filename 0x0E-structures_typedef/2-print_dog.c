#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints struct dog
 * @d: pointer to dog struct
 */

void print_dog(struct dog *d)
{
	char *name, *owner;

	if (d)
	{
		owner = d->owner != NULL ? d->owner : "(nil)";
		name = d->name != NULL ? d->name : "(nil)";

		printf("Name: %s\nAge: %f\nOwner: %s\n", name, d->age, owner);
	}
}
