#include "main.h"

/**
 * _puts - Prints a string
 * @str: String to print
 *
 * Return: Void (Nothing)
 */
void _puts(char *str)
{
	int iter = 0;

	while (str[iter])
		_putchar(str[iter++]);
	_putchar('\n');
}
