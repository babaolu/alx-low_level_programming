#include "main.h"

/**
 * is_prime_number - Checks if a nuber is prime
 * @n: Number to check
 *
 * Return: 1 if the number is prime,
 * zero if not prime
 */
int is_prime_number(int n)
{
	return (is_prime_num(n, n - 1));
}

/**
 * is_prime_num - Evaluates if a number is prime
 * @n: Number to evaluate
 * @a: Divisor
 *
 * Return: 1 if number is prime
 * 0 is not prime
 */
int is_prime_num(int n, int a)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if (a == 1)
		return (1);

	if (n % a)
	{
		if (is_prime_num(n, a - 1))
			return (1);
		return (0);
	}
	return (0);
}
