#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: First string
 * @src: Second string
 *
 * Return: Returns dest after concatenation
 */
char *_strcat(char *dest, char *src)
{
	char *pt = dest;
	int iter = 0;

	while (*pt)
		pt++;

	while (src[iter])
	{
		pt[iter] = src[iter];
		iter++;
	}
	return (dest);
}
