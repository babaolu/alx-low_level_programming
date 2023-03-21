#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees the dog_t struct
 * @d: Dog to be freed
 *
 * Return: Void (Nothing)
 */
void free_dog(dog_t *d)
{
	if (d)
		free(d);
}
