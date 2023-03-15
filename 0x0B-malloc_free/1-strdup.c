#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: String to duplicate
 *
 * Return: Pointer to new duplicate
 * NULL id insufficient memory was available
 */
char *_strdup(char *str)
{
	int iter;
	int len = 0;
	char *pstr = str;

	while (*pstr)
	{
		len++;
		pstr++;
	}

	pstr = (char *) malloc(sizeof(char) * (len + 1));
	if (!pstr)
		return (NULL);

	for (iter = 0; iter < len; iter++)
		pstr[iter] = str[iter];
	pstr[len] = '\0';

	return (pstr);
}
