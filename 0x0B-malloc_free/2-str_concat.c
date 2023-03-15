#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to new concatenated string
 * NULL id insufficient memory was available
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, iter;
	char *pstr;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	pstr = (char *) malloc(sizeof(char) * (len1 + len2 + 1));
	if (!pstr)
		return (NULL);

	for (iter = 0; iter < len1; iter++)
		pstr[iter] = s1[iter];
	pstr += len1;

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
int _strlen(char *str)
{
	int len = 0;

	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}
