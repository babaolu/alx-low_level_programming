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
		return (NULL);
	if (!c)
		return (s);

	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
