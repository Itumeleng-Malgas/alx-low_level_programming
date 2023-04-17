#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines a dog type
 * @name: string dog name
 * @age: float dog age
 * @owner: string dog owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
