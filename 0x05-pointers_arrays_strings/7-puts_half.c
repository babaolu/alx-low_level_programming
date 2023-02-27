#include "main.h"

/**
 * puts_half - Prints the second half of string
 * @str: String to print from
 *
 * Return: void
 */
void puts_half(char *str)
{
	int  iter, len;

	len = 0;
	while (str[len])
		len++;

	iter = len - (len / 2);

	while (str[iter])
		_putchar(str[iter++]);
	_putchar('\n');
}
