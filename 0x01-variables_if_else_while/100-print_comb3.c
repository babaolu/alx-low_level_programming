#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = '0';
	int b;

	while (a < ('0' + 9))
	{
		b = a + 1;
		while (b < ('0' + 10))
		{
			putchar(a);
			putchar(b);

			if (a == ('0' + 8))
			{
				b++;
				continue;
			}

			putchar(',');
			putchar(' ');
			b++;
		}
		a++;
	}
	putchar('\n');

	return (0);
}
