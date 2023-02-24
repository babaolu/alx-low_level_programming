#include "main.h"

/**
 * print_square - Prints a square
 * @size: Size of the square
 *
 * Return: Void (nothing)
 */
void print_square(int size)
{
	int x, y;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
			_putchar('#');
		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
