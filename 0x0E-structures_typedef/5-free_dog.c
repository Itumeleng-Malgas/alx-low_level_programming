#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - deallocates dog object's memory
 * @d: pointer to dog object
 */

void free_dog(dog_t *d)
{
	free(d);
}
