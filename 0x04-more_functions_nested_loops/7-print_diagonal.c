#include "main.h"

/**
 * print_diagonal - Prints diagonal line
 * @n: specifies the length of the line
 *
 * Return: Void (nothing)
 */
void print_diagonal(int n)
{
	int a;
	int b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
}
