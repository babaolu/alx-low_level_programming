#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a given index to 0
 * @n: Number whose bits are under consideration
 * @index: The given index
 *
 * Return: 1 if successful
 * -1 if error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_in;

	if (index > 63)
		return (-1);

	bit_in = (1 << index);
	if (*n & bit_in)
	{
		bit_in = ~bit_in;
		*n &= bit_in;
	}

	return (1);
}
