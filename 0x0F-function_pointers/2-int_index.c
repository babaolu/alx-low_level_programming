#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: Array to iterate
 * @size: Size of array
 * @cmp: Comparing function
 *
 * Return: Index of the first match
 * -1 if no match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int iter;

	if (size < 1)
		return (-1);

	for (iter = 0; iter < size; iter++)
	{
		if (cmp(array[iter]))
			return (iter);
	}
	return (-1);
}
