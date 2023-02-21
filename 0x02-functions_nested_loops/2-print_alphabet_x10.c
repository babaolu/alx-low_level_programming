#include "main.h"

/**
 * print_alphabet_x10 - simply print the alphabets 10 times
 *
 * Return: Always void (Nothing)
 */
void print_alphabet_x10(void)
{
	int alph = 0;
	char alpha_a;
	char alpha_z = 'z';

	while (alph < 10)
	{
		alpha_a = 'a';

		while (alpha_a <= alpha_z)
		{
			_putchar(alpha_a);
			alpha_a++;
		}
		_putchar('\n');
		alph++;
	}
}
