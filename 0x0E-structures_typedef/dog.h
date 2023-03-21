#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog identity
 * @name: Name of the dog.
 * @aged: Age of the dog.
 * @owner: Who owns the dog.
 *
 * Description: Dog and it's attributes
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
