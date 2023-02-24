#include "main.h"

/**
 * print_triangle - Prints triangle
 * @size: Size of the triangle
 *
 * Return: void (nothing)
 */
void print_triangle(int size)
{
	int x, y, z;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size - (x + 1); y++)
			_putchar(' ');

		for (z = 0; z < (x + 1); z++)
			_putchar('#');

		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
