#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: First string
 * @src: Second string
 * @n: length of src to consider
 *
 * Return: Returns dest after concatenation
 */
char *_strncat(char *dest, char *src, int n)
{
	char *pt = dest;
	int iter = 0;

	while (*pt)
		pt++;

	while (n)
	{
		if (src[iter])
		{
			pt[iter] = src[iter];
			iter++;
			n--;
			continue;
		}

		break;
	}
	return (dest);
}
