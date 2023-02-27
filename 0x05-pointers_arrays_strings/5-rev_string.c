#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: String to reverse
 *
 * Return: Void (Nothing)
 */
void rev_string(char *s)
{
	int len, iter, mir;

	len = 0;
	while (s[len])
		len++;

	mir = len / 2;

	for (iter = 0; iter < mir; iter++)
	{
		swap_int(iter, mir - (len + 1));
	}
}
