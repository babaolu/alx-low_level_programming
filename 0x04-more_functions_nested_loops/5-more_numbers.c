#include "main.h"

/**
 * more_numbers - simply print 1-14 10 times
 *
 * Return: Always void (Nothing)
 */
void more_numbers(void)
{
	int alph = 0;
	int double_dig;
	char number_0;
	char number_9 = '9';

	while (alph < 10)
	{
		number_0 = '0';

		while (number_0 <= number_9)
		{
			_putchar(number_0);
			number_0++;
		}

		double_dig = 10;

		while (double_dig < 15)
		{
			_putchar('0' + (double_dig / 10));
			_putchar('0' + (double_dig % 10));

			double_dig++;
		}
		_putchar('\n');
		alph++;
	}
}
