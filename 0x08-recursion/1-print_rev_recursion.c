#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: String to print
 *
 * Result: Void (Nothing)
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		s++;
		_print_rev_recursion(s);
		_putchar(*(s - 1));
	}
	else
		_putchar('\n');
}
