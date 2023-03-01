#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: Destination of copied string
 * @src: String to copy
 * @n: length of src to consider
 *
 * Return: Returns dest after copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *pt = dest;
	int iter = 0;
	int mark = 1;

	while (n)
	{
		if (mark)
			if (src[iter])
			{
				pt[iter] = src[iter];
				iter++;
				n--;
				continue;
			}
		mark = 0;
		pt[iter] = '\0';
		iter++;
		n--;
	}

	return (dest);
}
