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
	int c;

	while (a < ('0' + 8))
	{
		b = a + 1;
		c = a + 2;
		while (c < ('0' + 10))
		{
			putchar(a);
			putchar(b);
			putchar(c);

			if (a == ('0' + 7))
			{
				c++;
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
