#include "main.h"

/**
 * print_to_98 - Prints all numbers until 98
 * @n: the number to start from
 *
 * Return: Always void (nothing)
 */
void print_to_98(int n)
{
	int a;
	int b;
	int c;
	long int abs_n;

	do {
	cheat_point:
		abs_n = n;

		if (n < 0)
		{
			_putchar('-');
			abs_n = -abs_n;
		}

		a = abs_n / 100;
		b = (abs_n % 100) / 10;
		c = abs_n % 10;


		if (a == 0)
		{
			if (b == 0)
				;
			else
				_putchar('0' + b);
		}
		else
		{
			_putchar('0' + a);
			_putchar('0' + b);
		}

		_putchar('0' + c);

		if (n == 98)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(',');
			_putchar(' ');

			if (n < 98)
				n++;
			else if (n > 98)
				n--;

			if (n == 98)
				goto cheat_point;
		}
	} while (n != 98);
}
