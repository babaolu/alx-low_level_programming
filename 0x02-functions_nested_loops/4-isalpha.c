#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: The character to check
 *
 * Return: If character is an alphabet, 1.
 * 0 is returned if otherwise.
 */
int _isalpha(int c)
{
	int lower_a = 'a';
	int lower_z = 'z';
	int upper_A = 'A';
	int upper_Z = 'Z';

	if (((c >= lower_a) && (c <= lower_z)) ||
	    ((c >= upper_A) && (c <= upper_Z)))
		return (1);
	else
		return (0);
}
