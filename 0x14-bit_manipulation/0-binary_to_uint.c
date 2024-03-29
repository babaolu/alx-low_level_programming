#include "main.h"

/**
 * binary_to_uint - Converts a binary number in string format to a uint
 * @b: Binary number
 *
 * Return: Converted decimal integer
 * 0 if incorrect input
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bint = 0, binpower = 1, bitval;
	const char *bf;

	if (!b)
		return (0);

	for (bf = b; *bf != '\0'; bf++)
	{
		if ((*bf < '0') || (*bf > '1'))
			return (0);
	}
	--bf;

	for (bf = bf; bf >= b; bf--)
	{
		bitval = *bf - '0';
		bitval *= binpower;
		bint += bitval;

		binpower *= 2;
	}

	return (bint);
}
