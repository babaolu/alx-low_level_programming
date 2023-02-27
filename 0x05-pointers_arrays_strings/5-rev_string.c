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
	char med;

	len = 0;
	while (s[len])
		len++;

	mir = len / 2;

	for (iter = 0; iter < mir; iter++)
	{
		med = s[iter];
		s[iter] = s[len - (iter + 1)];
		s[len - (iter + 1)] = med;
	}
}
