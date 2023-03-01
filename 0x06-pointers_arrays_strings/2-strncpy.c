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
	pt[iter] = '\0';

	return (dest);
}
