#include "main.h"

/**
 * print_alphabet_x10 - simply print the alphabets 10 times
 *
 * Return: Always void (Nothing)
 */
void print_alphabet_x10(void)
{
	int alph = 0;

	while (alph < 10)
	{
		print_alphabet();
		alph++;
	}
}
