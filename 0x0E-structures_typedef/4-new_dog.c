#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: string for dog name
 * @age:; float for dog age
 * @owner: string for dog owner
 *
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr = malloc(sizeof(dog_t));

	if (!new_dog_ptr)
		return (NULL);

	new_dog_ptr->owner = malloc(strlen(owner) + 1);
	new_dog_ptr->name = malloc(strlen(name) + 1);

	/* If memory allocation failed, free any previously allocated memory */
	if (!new_dog_ptr->owner || !new_dog_ptr->name)
	{
		free(new_dog_ptr->owner);
		free(new_dog_ptr->name);
		free(new_dog_ptr);

		return (NULL);
	}

	strcpy(new_dog_ptr->owner, owner);
	strcpy(new_dog_ptr->name, name);
	new_dog_ptr->age = age;

	return (new_dog_ptr);
}
