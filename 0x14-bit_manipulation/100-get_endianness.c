#include "main.h"

/**
 * get_endianness - Checks for endianness
 *
 * Return: 0 if big endian
 * 1 if little endian
 */
int get_endianness(void)
{
	int fouradd = 1;
	char *firstadd = (char *) &fouradd;

	return (*firstadd);
}
