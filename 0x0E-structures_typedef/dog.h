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

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *, char *, float, char *);

void print_dog(struct dog *);

#endif /* DOG_H */
