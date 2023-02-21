#include "main.h"

/**
 * _abs - Computes the absolute value of a number
 * @n: number from which the absolute value is found
 *
 * Return: the absolute value of n.
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
