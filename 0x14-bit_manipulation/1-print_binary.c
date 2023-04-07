#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: Number whose binary representation is to be printed
 *
 * Return: Void (Nothing)
 */
void print_binary(unsigned long int n)
{
	unsigned long int bitcheck = 0x8000000000000000, b;
	unsigned short int print_start = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (b = bitcheck; b > 0; b >>= 1)
	{
		if (n & b)
		{
			if (!print_start)
				print_start = 1;
			_putchar('1');
		}
		else
		{
			if (print_start)
			{
				_putchar('0');
			}
		}
	}
}
