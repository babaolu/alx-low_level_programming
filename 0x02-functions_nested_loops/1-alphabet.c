#innclude <stdio.h>

/**
 * print_alphabet - simply print the alphabets
 *
 * Return: Always void (Nothing)
 */
int print_alphabet(void)
{
	char alpha_a = 'a';
	char alpha_z = 'z';

	while (alpha_a <= alpha_z)
	{
		putchar(alpha_a);
		alpha_a++;
	}
	putchar('\n');
}
