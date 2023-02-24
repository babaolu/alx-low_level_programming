#include "main.h"

/**
 * print_numbers - simply print the numbers
 *
 * Return: Always void (Nothing)
 */
void print_numbers(void)
{
	char number_0 = '0';
	char number_9 = '9';

	while (number_0 <= number_9)
	{
		_putchar(number_0);
		number_0++;
	}
	_putchar('\n');
}
