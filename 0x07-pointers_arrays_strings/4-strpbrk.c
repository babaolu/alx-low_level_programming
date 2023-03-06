#include "main.h"

/**
 * _strpbrk - Searches a string for any set of bytes
 * @s: String to parse
 * @accept: String containing desired characters
 *
 * Return: Number of bytes of initial segment
 */
char *_strpbrk(char *s, char *accept)
{
	char *acc;

	while (*s)
	{
		acc = accept;
		while (*acc)
		{
			if (*s == *acc)
			{
				return (s);
			}
			acc++;
		}
		s++;
	}
	return (0);
}
