#include <stdio.h>
#include "main.h"

/**
 * print_array - Print the number of elements as specified
 * @s: Array to print from
 * @n: number of elements to print
 *
 * Return: void (nothing)
 */
void print_array(int *a, int n)
{
	int iter;

	for (iter = 0; iter < n; iter++)
		if (iter != n - 1)
			printf("%d, ", a[iter]);
		else
			printf("%d\n", a[iter]);
}
