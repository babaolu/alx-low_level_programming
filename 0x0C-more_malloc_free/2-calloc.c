#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory of an array on the heap
 * @nmemb: Number of elements
 * @size: Size of each element
 *
 * Return: Pointer to allocated memory on success
 * NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *cp;
	unsigned int iter = nmemb * size;

	if (!iter)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (!ptr)
		return (NULL);

	cp = ptr;
	for (iter = 0; iter < (nmemb * size); iter++)
		cp[iter] = 0;

	return (ptr);
}
