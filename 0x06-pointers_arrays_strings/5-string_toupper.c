#include "main.h"

/**
 * string_toupper - Changes lowercase in a string to uppercase
 * @s: String to parse
 *
 * Return: Converted string
 */
char *string_toupper(char *s)
{
	char *pt = s;
	int app;

	while (*pt)
	{
		if ((*pt >= 'a') && (*pt <= 'z'))
		{
			app = *pt - 'a';
			*pt = 'A' + app;
		}
		pt++;
	}
	return (s);
}
