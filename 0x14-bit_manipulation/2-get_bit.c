#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: Number whose bits are under consideration
 * @index: The given index
 *
 * Return: The value of the bit at the given index
 * -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	if (n & (1 << index))
		return (1);
	else
		return (0);
}
