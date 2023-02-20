#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int nmod = n % 10;
	if (nmod > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, nmod);
	else if (nmod == 0)
		printf("Last digit of %d is %d and is 0\n", n, nmod);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, nmod);
	
	return (0);
}
