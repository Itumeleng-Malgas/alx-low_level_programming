#include <string.h>
#include "dog.h"

/**
 * init_dog -  initialize a variable of type struct dog
 * @d: pointer to struct dog type
 * @name: string for dog name
 * @age: float for dog age
 * @owner: string for dog ower
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
