#include "main.h"

/**
 * more_numbers - simply print 1-14 10 times
 *
 * Return: Always void (Nothing)
 */
void more_numbers(void)
{
	int alph = 0;
	int double_num;
	int double_dig[2];
	char number_0;
	char number_9 = '9';
	int  i;

	while (alph < 10)
	{
		number_0 = '0';

		while (number_0 <= number_9)
		{
			_putchar(number_0);
			number_0++;
		}

		double_num = 10;

		while (double_num < 15)
		{
			double_dig[0] = double_num / 10;
			double_dig[1] = double_num % 10;

			for (i = 0; i < 2; i++)
				_putchar('0' + double_dig[i]);
			double_num++;
		}
		_putchar('\n');
		alph++;
	}
}
