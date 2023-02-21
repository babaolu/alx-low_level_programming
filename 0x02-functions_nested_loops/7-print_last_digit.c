#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number from which the last digit is gotten
 *
 * Return: The last digit of n.
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	
	int last_d = n % 10;

	_putchar('0' + last_d);
	return (last_d);
}
