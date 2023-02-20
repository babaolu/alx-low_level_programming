#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = '0';
	int alpha_a = 'a';
	int alpha_f = 'f';

	while (a < ('0' + 10))
	{
		putchar(a);
		a++;
	}

	while (alpha_a < (alpha_f + 1))
	{
		putchar(alpha_a);
		alpha_a++;
	}
	putchar('\n');

	return (0);
}
