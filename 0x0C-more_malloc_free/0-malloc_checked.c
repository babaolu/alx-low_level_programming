#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory on the heap
 * @b: size of block
 *
 * Return: Pointer to allocated memory on success
 * Terminates process with exit status value 98 on failure
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (!ptr)
		exit(98);
	return (ptr);
}
