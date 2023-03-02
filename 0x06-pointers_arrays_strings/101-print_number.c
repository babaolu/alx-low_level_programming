#include "main.h"

/**
 * print_number - Prints integers
 * @n: integer to print
 *
 * Result: Void (Success)
 */
void print_number(int n)
{
	int len, div, cut;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	else if (n == 0)
		_putchar ('0');

	cut = n;
	while (cut)
	{
		cut /= 10;
		len++;
	}

	while (len)
	{
		div = _pow(10, len - 1);
		_putchar('0' + (n / div));

		n = n % div;

		len--;
	}
}


/**
 *_pow - Evaluates an exponent
 * @base: the base
 * @exp: the exponent
 *
 * Return: the evaluated power
 */
int _pow(int base, int exp)
{
	int p = 1;

	while (exp)
	{
		p *= base;
		exp--;
	}
	return (p);
}
