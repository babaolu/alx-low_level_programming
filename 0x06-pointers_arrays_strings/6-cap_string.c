#include "main.h"

/**
 * cap_string - Capitalizes all word of a string
 * @s: String to parse
 *
 * Return: Converted string
 */
char *cap_string(char *s)
{
	char *pt = s;
	int cap = 1;
	int app;

	while (*pt)
	{
		if (cap)
			if ((*pt >= 'a') && (*pt <= 'z'))
			{
				app = *pt - 'a';
				*pt = 'A' + app;
				cap = 0;
			}
			else if (((*pt >= 'A') && (*pt <= 'Z')) ||
				 ((*pt >= '0') && (*pt <= '9')))
				cap = 0;
			else
			{}
		else
			switch (*pt)
			{
			case ' ': case '\t': case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				cap = 1;
				break;
			default:
				break;
			}
		pt++;
	}
	return (s);
}
