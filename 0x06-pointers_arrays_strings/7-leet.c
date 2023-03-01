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

	while (*pt)
	{
		exch_alp(pt, 'a', '4');
		exch_alp(pt, 'e', '3');
		exch_alp(pt, 'o', '0');
		exch_alp(pt, 't', '7');
		exch_alp(pt, 'l', '1');

		pt++;
	}
	return (s);
}

/**
 * exch_alp - Replace alphabet with another character
 * @s: String position
 * @al: Alphabet to be replaced
 * @ch: Value to replace with
 *
 * Return: Void (Nothing)
 */
void exch_alp(char *s, char al, char ch)
{
	int dif = al - 'a';
	char cal = 'A' + dif;

	if ((*s == al) || (*s == cal))
		*s = ch;
}
