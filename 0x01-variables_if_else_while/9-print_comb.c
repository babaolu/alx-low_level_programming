#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = '0';

	while (a < ('0' + 9))
	{
		putchar(a);
		putchar(',');
		putchar(' ');
		a++;
	}
	putchar('9');

	return (0);
}
