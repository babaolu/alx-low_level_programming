#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = '0';

	while (a < ('a' + 10))
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
