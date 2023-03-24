#include "variadic_functions.h"

/**
 * sum_them_all - Sums up a number of parameters
 * @n: Number of parameters to sum up
 *
 * Return: Summed up value
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int iter = 0;
	int sum = 0;
	va_list ap;

	va_start(ap, n);

	for (iter = 0; iter < n; iter++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);

	return (sum);
}
