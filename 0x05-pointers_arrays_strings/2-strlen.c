#include "main.h"

/**
 * _strlen - Evaluates length of string
 * @s: String to evaluate on
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}
