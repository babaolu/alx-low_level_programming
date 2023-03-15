#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 * @size: Size of the array
 * @c: Value to initialize with
 *
 * Return: Pointer to the array,
 * 0 if allocation fails or if size is 0.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int iter;
	char *ch = NULL;

	if (!size)
		return (NULL);

	ch = (char *) malloc(sizeof(char) * size);
	if (!ch)
		return (NULL);

	for (iter = 0; iter < size; iter++)
		ch[iter] = c;

	return (ch);
}
