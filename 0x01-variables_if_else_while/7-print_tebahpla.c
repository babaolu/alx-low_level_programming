#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alpha_a = 97;
	int alpha_z = alpha_a + 25;

	while (alpha_z > (alpha_a - 1))
	{
		putchar(alpha_z);
		alpha_z--;
	}
	putchar('\n');

	return (0);
}
