#include "main.h"

/**
 * _strcpy - Copies string
 * @dest: Destination of copied string
 * @src: Source to be copied from
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int iter = 0;

	while (src[iter])
	{
		dest[iter] = src[iter];
		iter++;
	}
	dest[iter] = 0;

	return (dest);
}
