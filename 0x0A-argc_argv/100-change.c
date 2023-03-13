#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print program name
 * @argc: Number of commandline arguments
 * @argv: Array of commandline arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int change, div;
	long unsigned int iter;
	int coins = 0;
	int coinval[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);
	for (iter = 0; iter < (sizeof(coinval) / sizeof(int)); iter++)
	{
		div = change / coinval[iter];
		coins += div;
		change -= div * coinval[iter];
	}
	printf("%d\n", coins);

	return (0);
}
