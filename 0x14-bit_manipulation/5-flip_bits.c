#include "main.h"

/**
 * flip_bits - Evaluates number of bits needed to be flipped
 * @n: First value to be compared with the second
 * @m: Second value to be compared with the first
 *
 * Return: Number of bits needed to be flipped to get from one number
 * to the other
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bitdif = (m ^ n), bitcheck;
	unsigned int flipnum = 0;

	for (bitcheck = 1; bitcheck > 0; bitcheck <<= 1)
	{
		if (bitcheck & bitdif)
			flipnum++;
	}

	return (flipnum);
}
