#include "search_algos.h"

/**
 * binary_search - Using binary search algorithm
 * @array: Array on which to perform the search
 * @size: Size of the array
 * @value: Value being searched for
 * Return: Index of the location of match
 * -1 if no match is found or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid = (size - 1) / 2, iter = 0;

	if (!array)
		return (-1);
	if (!size)
		return (-1);

	printf("Searching in array: ");
	for (iter = 0; iter < size; iter++)
	{
		printf("%i", array[iter]);
		if (iter != size - 1)
			printf(", ");
		else
			printf("\n");
	}

	if (array[mid] == value)
		return (mid);

	if ((array[mid] > value) && mid > 0)
		return (binary_search(array, mid, value));
	if ((array[mid] < value) && (size - mid > 1))
		return (binary_search(array + mid + 1, size - mid - 1, value));

	return (-1);
}
