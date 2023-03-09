#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root
 * @n: Number whose natural square root we are finding.
 *
 * Return: Natural square root if it exists,
 * -1 if it doesn't exist
 */
int _sqrt_recursion(int n)
{
	return (root_rec(n, n / 2));
}

/**
 * root_rec - Finds the natural square root proper
 * @quot: Quotient whose natural square root to find
 * @div: divisors
 *
 * Return: Natural square if exists,
 * -1 if it doesn't exist
 */
int root_rec(long int quot, long int div)
{
	long int ret, sdiv;

	if (quot == 1)
		return (1);
	if (quot == 0)
		return (0);
	if (quot < 0)
		return (-1);
	if (div == 1)
		return (-1);
	if (quot % div == 0)
	{
		sdiv = div * div;
		if (quot % sdiv)
			return (root_rec(quot, div - 1));

		ret = root_rec(quot / sdiv, quot / (sdiv * 2));
		if (ret < 0)
			return (-1);

		return (div * ret);
	}
	else
	{
		return (root_rec(quot, div - 1));
	}
}
