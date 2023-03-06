#include "main.h"

/**
 * _strchr - Locates a character
 * @s: String to parse
 * @c: Character to find
 *
 * Return: Pointer to first occurence
 */
char *_strchr(char *s, char c)
{
	if (!s)
		return (0);
	
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}
