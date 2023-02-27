#include "main.h"

/**
 * print_rev - Prints string in reverse
 * @s: String to print
 *
 * Return: Void (Nothing)
 */
void print_rev(char *s)
{
	int rev;
	int iter = 0;

	while (s[iter])
		iter++;

	for (rev = iter; rev > 0; rev--)
		_puthchar(s[rev - 1]);
	_putchar('\n');
}
