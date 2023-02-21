#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: Always void (nothing)
 */
void times_table(void)
{
	int a = 0;
	int b;
	int mul1;
	int mul2;

	while(a < 10)
	{
		b = 0;
		while (b < 10)
		{
			mul1 = (a * b) / 10;
			mul2 = (a * b) % 10;

			if (mul1 == 0)
				if (b == 0)
					;
				else
					_putchar(' ');
			else
				_putchar('0' + mul1);
			_putchar('0' + mul2);

			if (b == 9)
			{
				b++;
				_putchar('$');
				_putchar('\n');
				continue;
			}

			_putchar(',');
			_putchar(' ');

			b++;
		}
		a++;
	}
}
