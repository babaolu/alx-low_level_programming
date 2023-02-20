#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alpha_a = 97;
	int alpha_A = 65;
	int alpha_z = alpha_a + 25;
	int alpha_Z = alpha_A + 25;

	while (alpha_a < (alpha_z + 1))
	{
		putchar(alpha_a);
		alpha_a++;
	}

	while (alpha_A < (alpha_Z + 1))
	{
		putchar(alpha_A);
		alpha_A++;
	}
	putchar('\n');

	return (0);
}
