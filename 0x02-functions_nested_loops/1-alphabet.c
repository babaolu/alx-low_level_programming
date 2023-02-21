#include "main.h"

/**
 * print_alphabet - simply print the alphabets
 *
 * Return: Always void (Nothing)
 */
void print_alphabet(void)
{
	char alpha_a = 'a';
	char alpha_z = 'z';

	while (alpha_a <= alpha_z)
	{
		_putchar(alpha_a);
		alpha_a++;
	}
	_putchar('\n');
}
