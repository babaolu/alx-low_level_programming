#include "main.h"

/**
 * print_line - Print '_' a specified of times
 * @n: the number of specified time
 *
 * Return: Void (nothing)
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
		_putchar('_');
	_putchar('\n');
}
