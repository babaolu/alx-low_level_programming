#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = '0';

	while (a < ('0' + 10))
	{
		putchar(a);

		if (a == ('0' + 9)
		    continue;

		putchar(',');
		putchar(' ');
		a++;
	}
	putchar('\n');

	return (0);
}
