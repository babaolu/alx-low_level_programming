#include "search_algos.h"

/**
 * linear_search - Searches using linear search
 * @array: Array to search
 * @size: Size of array
 * @value: Value being searched
 * Return: Index of first match
 * -1 if there's not match or array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t iter = 0;

	if (!array)
		return (-1);
	for (iter = 0; iter < size; iter++)
	{
		printf("Value checked array[%lu] = [%i]\n", iter, array[iter]);
		if (array[iter] == value)
			return (iter);
	}
	return (-1);
}
