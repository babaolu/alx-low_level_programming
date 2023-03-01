#include "main.h"

/**
 * print_number - Prints integers
 * @n: integer to print
 *
 * Result: Void (Success)
 */
void print_number(int n)
{
	int len, quo, rem;

	len = num_len(n);

	while (len > 0)
	{
		_putchar('0' + (n / _pow(10, len-1)));

		n = n % _pow(10, len-1);

		len --;
	}
}
