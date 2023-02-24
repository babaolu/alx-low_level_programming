#include "main.h"

/**
 * print_most_numbers - simply print the numbers except 2 and 4
 *
 * Return: Always void (Nothing)
 */
void print_most_numbers(void)
{
	char number_0 = '0';
	char number_9 = '9';

	while (number_0 <= number_9)
	{
		if ((number_0 = '2') || (number_0 = '4'))
			;
		else
			_putchar(number_0);
		number_0++;
	}
	_putchar('\n');
}
