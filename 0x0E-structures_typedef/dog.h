#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog identity
 * @name: Name of the dog.
 * @age: Age of the dog.
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

void init_dog(struct dog *, char *, float, char *);

void print_dog(struct dog *);

#endif /* DOG_H */
