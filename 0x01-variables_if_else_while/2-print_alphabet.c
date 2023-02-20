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

	while (alpha_a < (alpha_z + 1))
	{
		putchar(alpha_a);
		alpha_a++;
	}
	putchar('\n');
	
	return (0);
}
