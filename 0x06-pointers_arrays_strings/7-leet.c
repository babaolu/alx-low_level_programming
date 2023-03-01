#include "main.h"

/**
 * leet - Encodeds a string
 * @s: String to parse
 *
 * Return: Converted string
 */
char *leet(char *s)
{
	char *pt = s;
	int app;

	while (*pt)
	{
		if ((*pt == 'a') || (*pt == 'A'))
		{
			*pt = '4';
		}
		else if ((*pt == 'e') || (*pt == 'E'))
		{
			*pt = '3';
		}
		else if ((*pt == 'o') || (*pt == 'O'))
		{
			*pt = '0';
		}
		else if ((*pt == 't') || (*pt == 'T'))
		{
			*pt = '7';
		}
		else if ((*pt == 'l') || (*pt == 'L'))
		{
			*pt = '1';
		}
		pt++;
	}
	return (s);
}
