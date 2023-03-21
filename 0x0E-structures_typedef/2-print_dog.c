#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints the struct dog
 * @d: Dog to print
 *
 * Return: Void (Nothing)
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (!d->name)
		d->name = "(nil)";
	printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (!d->owner)
		d->owner = "(nil)";
	printf("Owner: %s\n", d->owner);

}
