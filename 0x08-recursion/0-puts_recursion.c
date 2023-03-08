#include "main.h"

/**
 * _puts_recursion - Prints a string
 * @s: String to print
 *
 * Return: Void (Nothing)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
