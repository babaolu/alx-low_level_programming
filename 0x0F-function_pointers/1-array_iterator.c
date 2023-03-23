#include "function_pointers.h"

/**
 * array_iterator - Call function for eack element of array
 * @array: Array to iterate
 * @size: Size of array
 * @action: Function to execute
 *
 * Return: Void (Nothing)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t iter;

	if (!(array && action))
		return;

	for (iter = 0; iter < size; iter++)
	{
		action(array[iter]);
	}
}
