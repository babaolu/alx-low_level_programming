#include <stdio.h>

/**
 * is_prime - Check if a number is prime
 * @pri: number to evaluate
 *
 * Return: returns 1 if prime, and 0 if false
 */
int is_prime(long int pri)
{
	long int div;

	if (pri == 2)
		return (1);

	for (div = 2; div < pri; div++)
		if (pri % div == 0)
			return (0);
	return (1);
}

/**
 * main - Entry point to prime factor
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int num = 612852475143;
	long int x;

	for (x = num; x > 1; x--)
		if (is_prime(x))
			if (num / x == 0)
			{
				printf("%ld\n", x);
				return (0);
			}
	printf("Could not find a prime factor\n");

	return (0);
}
