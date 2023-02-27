#include "main.h"

/**
 * swap_int - Swaps two integers
 * @a: first integer to swap
 * @b: integer to swap with b
 *
 * Return: Void (Nothing)
 */
void swap_int(int *a, int *b)
{
	int med;

	med = *a;
	*a = *b;
	*b = med;
}
