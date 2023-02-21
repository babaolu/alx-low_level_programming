#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 *
 * Return: Always void (nothing)
 */
void jack_bauer(void)
{
	int h1;
	int h2;
	int m1;
	int m2;
	int minute;
	int hour = 0;

	while (hour < 24)
	{
		h1 = hour / 10;
		h2 = hour % 10;
		minute = 0;

		while (minute < 60)
		{
			m1 = minute / 10;
			m2 = minute % 10;

			_putchar('0' + h1);
			_putchar('0' + h2);
			_putchar(':');
			_putchar('0' + m1);
			_putchar('0' + m2);
			_putchar('\n');

			minute++;
		}
		hour++;
	}
}
