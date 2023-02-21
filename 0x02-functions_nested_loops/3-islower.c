#include "main.h"

/**
 * _islower - checks for lower case character
 * @c: The character to check
 *
 * Return: If character is lowercase, 1.
 * 0 is returned if otherwise.
 */
int _islower(int c)
{
	int lower_a = 'a';
	int lower_z = 'z';

	if ((c >= lower_a) && (c <= lower_z))
		return (1);
	else
		return (0);
}
