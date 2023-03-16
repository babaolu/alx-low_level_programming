#include "main.h"
#include <stdlib.h>

/**
 * array_range - Create and fill array from min-max
 * @min: Minimum value
 * @max: Maximum value
 *
 * Return: Pointer to newly created array
 * NULL when malloc fails or min>max
 */
int *array_range(int min, int max)
{
	int *ptr, iter;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(*ptr) * (max - min + 1));
	if (!ptr)
		return (NULL);

	iter = min;
	for (; min <= max; min++)
	{
		ptr[min - iter] = min;
	}
	return (ptr);
}
