#include "main.h"

/**
 * _memset - Fills into memory
 * @s: Pointer to first element
 * @b: Value to fill in
 * @n: Number of elements to fill
 *
 * Result: Filled in memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;
	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
