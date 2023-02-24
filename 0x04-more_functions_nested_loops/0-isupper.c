#include "main.h"

/**
 * _isupper - checks for upper case character
 * @c: The character to check
 *
 * Return: If character is uppercase, 1.
 * 0 is returned if otherwise.
 */
int _isupper(int c)
{
	int upper_A = 'A';
	int upper_Z = 'Z';

	if ((c >= upper_A) && (c <= upper_Z))
		return (1);
	else
		return (0);
}
