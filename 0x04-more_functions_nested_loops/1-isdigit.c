#include "main.h"

/**
 * _isdigit - checks for digit character
 * @c: The character to check
 *
 * Return: If character is digit, 1.
 * 0 is returned if otherwise.
 */
int _isdigit(int c)
{
	int number_0 = '0';
	int number_9 = '9';

	if ((c >= number_0) && (c <= number_9))
		return (1);
	else
		return (0);
}
