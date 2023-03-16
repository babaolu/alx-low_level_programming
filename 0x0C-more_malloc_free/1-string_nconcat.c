#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: First number of elements from s2
 *
 * Return: Pointer to new concatenated string
 * NULL if function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, iter;
	char *pstr;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	pstr = malloc(sizeof(*pstr) * (len1 + n + 1));
	if (!pstr)
		return (NULL);

	for (iter = 0; iter < len1; iter++)
		pstr[iter] = s1[iter];
	pstr += len1;

	if (n < len2)
		len2 = n;

	for (iter = 0; iter < len2; iter++)
		pstr[iter] = s2[iter];
	pstr[len2] = '\0';

	return (pstr - len1);
}

/**
 * _strlen - Length of string
 * @str: String under consideration
 *
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
	int len = 0;

	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}
