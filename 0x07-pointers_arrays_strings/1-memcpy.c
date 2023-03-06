#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: Destination of copy
 * @src: Source of the copy
 * @n: Number of elements to copy
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
