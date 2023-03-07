#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Sums the two diagonals of a matrix
 * @a: Square matrix
 * @size: Size of matric
 *
 * Return: Void (Nothing)
 */
void print_diagsums(int *a, int size)
{
	int r;
	long int pri = 0;
	long int sec = 0;

	for (r = 0; r < size; r++)
	{
		pri += a[r];
		sec += a[size - r - 1];
		a += size;
	}
	printf("%ld, %ld\n", pri, sec);
}
