#include "main.h"

/**
 * factorial - Returns the factorial of a number
 * @n: Number that has the factorial
 *
 * Return: The factorial of n.
 */
int factorial(int n)
{
	if (n > 0)
		return (n * factorial(n - 1));
	else if (n == 0)
		return (1);
	else
		return (-1);
}
