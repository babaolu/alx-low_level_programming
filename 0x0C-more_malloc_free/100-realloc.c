#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocate memory block
 * @ptr: Pointer to previouslly allocated memory
 * @old_size: Size allocated to ptr
 * @new_size: New of new memory block
 *
 * Return: Pointer to resolved memory
 * NULL if new_size is 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr, *oldptr = ptr;
	unsigned int iter;

	if (!new_size)
	{
		if (ptr)
			free(oldptr);
		return (NULL);
	}

	if (ptr)
	{
		if (new_size == old_size)
			return (ptr);
		if (new_size < old_size)
		{
			free(oldptr + new_size);
			return (ptr);
		}
		else
		{
			newptr = malloc(new_size);
			if (!newptr)
				return (NULL);
			for (iter = 0; iter < old_size; iter++)
				newptr[iter] = oldptr[iter];
			free(ptr);
			return (newptr);
		}
	}
	else
	{
		if (new_size)
		{
			newptr = malloc(new_size);
			if (!newptr)
				return (NULL);
			return (newptr);
		}
		return (NULL);
	}
}
