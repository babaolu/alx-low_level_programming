#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: String used
 *
 * Return: Void (Nothing)
 */
void puts2(char *str)
{
	int iter;

	iter = 0;
	while (str[iter])
	{
		if (iter % 2 == 0)
			_putchar(str[iter]);
		iter++;
	}
	_putchar('\n');
}
