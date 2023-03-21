#include "main.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Return: Pointer to newly created dog
 * NULL if failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_p = malloc(sizeof(*dog_p));

	if (!dog_p)
		return (NULL);

	dog_p->name = name;
	dog_p->age = age;
	dog_p->owner = owner;

	return (dog_p);
}
