#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: String 1
 * @s2: String 2
 *
 * Return: The difference between s1 and s2. 0 if equal
 */
int _strcmp(char *s1, char *s2)
{
	int dif;

	while (*s1)
	{
		dif = *s1 - *s2;
		if (!dif)
		{
			s1++;
			s2++;
			continue;
		}
		return (dif);
	}

	if (*s2)
		return (-(*s2));
	return (0);
}
