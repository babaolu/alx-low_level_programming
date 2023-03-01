#include "main.h"

/**
 * reverse_array - Reverses an array of integers
 * @a: Array to reverse
 * @n: Size of array
 *
 * Return: Void (Nothing)
 */
void reverse_array(int *a, int n)
{
	int len, iter, mir, med;
	int *s = a;

	len = n;
	mir = len / 2;

	for (iter = 0; iter < mir; iter++)
	{
		med = s[iter];
		s[iter] = s[len - (iter + 1)];
		s[len - (iter + 1)] = med;
	}
}
