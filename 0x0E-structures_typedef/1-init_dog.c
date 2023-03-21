#include "dog.h"

/**
 * init_dog - Initializes a variable
 * @d: Variable to initialize
 * @name: Name of entity
 * @age: Age of entity
 * @owner: Owner of entity
 *
 * Return: Void (Nothing)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	(*d).age = age;
	d->owner = owner;
}
