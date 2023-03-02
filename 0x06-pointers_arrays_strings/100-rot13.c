#include "main.h"

/**
 * rot13 - Encodes string using rot13
 * @s: String to parse
 *
 * Return: Converted string
 */
char *rot13(char *s)
{
	char *pt = s;
	int hcf = 32;
	int app, quo, rem;

	while (*pt)
	{
		if (((*pt >= 'a') && (*pt <= 'z')) ||
			((*pt >= 'A') && (*pt <= 'Z')))
		{
			quo = *pt / hcf;
			rem = (*pt % hcf) - 1;
			app = ((rem + 13) % 26) + 1;
			*pt = (quo * hcf) + app;
		}
		pt++;
	}
	return (s);
}
